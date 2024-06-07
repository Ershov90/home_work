#include "temp_functions.h"

int read_file(LOG_t *log, char *file_name)
{
    FILE *f_in = fopen(file_name, "r");
    if (f_in == NULL)                                   // Ошибка в имени файла. Прерыванние функции
    {
        printf("File dont found\n");
        fclose(f_in);
        return 0;
    }
    uint32_t count_r = 1000;
    log->data_line = (DATA_t* ) malloc(sizeof(DATA_t)*count_r); // Выделение памяти для 1000 строк
    if (log->data_line == NULL)
        printf("Error memmory\n");
    log->cnt_line = 0;
    char line[50] = {0};
    uint32_t count = 1;
    while (fgets(line, sizeof(line), f_in))
    {
        if (sscanf(line, "%d;%d;%d;%d;%d;%d",           // Считывание и запись по строчно. Если строка
                   &log->data_line[log->cnt_line].year, // не соотвествует образцу, печает ошибку и переходит далее на строку
                   &log->data_line[log->cnt_line].month,
                   &log->data_line[log->cnt_line].day,
                   &log->data_line[log->cnt_line].hour,
                   &log->data_line[log->cnt_line].minute,
                   &log->data_line[log->cnt_line].temp) != 6)
            printf("Error read logs line %d\n", count++);
        else
            count++, log->cnt_line++;
        if (log->cnt_line >= count_r)                                   //Добавление памяти для 1000 строк
            {
                count_r += 1000;
                log->data_line = (DATA_t*) realloc(log->data_line, sizeof(DATA_t)*count_r);
            } 
    }
    fclose(f_in);
    return count;
}

void cur_month(LOG_t *log, int month)                   // Вывод статистики за указанный месяц
{
    int max_temp = -100, min_temp = 100;
    int64_t avr_temp = 0;
    uint32_t count = 0;
    for (uint32_t i = 0; i < log->cnt_line; i++)
    {
        if (log->data_line[i].month == month)
        {
            count++;
            avr_temp += log->data_line[i].temp;         // Сумма теператур для средней за месяц
            if (log->data_line[i].temp > max_temp)      // Min Max за месяц
                max_temp = log->data_line[i].temp;
            if (log->data_line[i].temp < min_temp)
                min_temp = log->data_line[i].temp;
        }
    }
    if (count != 0)                                     // Если за месяц есть данные, выводим результат
    {
        printf("-------------------------------------------------\n");
        printf("|In %d month | AvrTemp  %3d | Max %3d | Min  %3d|\n", month, avr_temp / count, max_temp, min_temp);
        printf("-------------------------------------------------\n");
    }
    else                                                // На случай если за месяц никаких данных нет
    {
        printf("|--------In %2d month  No data-----------------|\n", month);
        printf("|---------------------------------------------|\n");
    }
}

void stat_year(LOG_t *log)                              // Вывод статистики по месяцам и общие итоги за год
{
    int max_temp = -100, min_temp = 100, max_year = -100, min_year = 100;
    float year_temp;
    int64_t avr_temp = 0;
    uint32_t count = 0;
    int cnt_month = 0;
    printf("-----------------------------------------------\n");
    for (int m = 0; m < 12; m++)                        // Цикл на месяца
    {
        for (uint32_t i = 0; i < log->cnt_line; i++)
        {
            if (log->data_line[i].month == (m + 1))      // Цикл на строки данных
            {
                count++;                                 // Сумма теператур для средней за месяц
                avr_temp += log->data_line[i].temp;
                if (log->data_line[i].temp > max_temp)   // Max и Min температура
                    max_temp = log->data_line[i].temp;
                if (log->data_line[i].temp < min_temp)
                    min_temp = log->data_line[i].temp;
            }
        }
        if (count != 0)                                  // Если за месяц есть данные, выводим результат
        {
            printf("|In %2d month | AvrTemp %3d | Max %3d | Min %3d|\n", m + 1, avr_temp / count, max_temp, min_temp);
            printf("|---------------------------------------------|\n");
            cnt_month++;
        }
        else                                             // На случай если за месяц никаких данных нет
        {
            printf("|--------In %2d month  No data-----------------|\n", m + 1);
            printf("|---------------------------------------------|\n");
        }
        if (max_year < max_temp)                        // Max Min температура за год
            max_year = max_temp;
        if (min_year > min_temp)
            min_year = min_temp;
        year_temp += (float)avr_temp / count;           // Средняя за год, с точкой что бы было точнее
        max_temp = -100, min_temp = 100;
        avr_temp = 0;
        count = 0;
    }
    printf("|   Summary  | AvrTemp %3d | Max %3d | Min %3d|\n", (int)year_temp / cnt_month, max_year, min_year);
    printf("-----------------------------------------------\n");
}
