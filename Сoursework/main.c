#include "temp_functions.h"

LOG_t log_data;

int main(int argc, char *argv[])
{
    int month = 0;                                          
    char f_name[50] = {0};
    int rez = 0;
    opterr = 0;                                                //Ошибки не обрабатываем
    if (argc == 1)                                             //Если программа запускается без укзание файла,
    {                                                          //просим ввести. Завершение программы.
        printf("Enter File Name -f[name]\nUse -h for HELP\n");
        return 2;
    }
    while ((rez = getopt(argc, argv, "hf:m:")) != -1)
    {
        switch (rez)
        {
        case 'h':                                               //Вывод помощи. Завершение программы                                                   
            printf("HELP\n");
            printf("-f[file name with logs]\n");
            printf("-m[month number (1-12)](without -m stats all year)\n");
            return 0;
        case 'f':                                               //Проверка аргумента file name
            printf("File name: %s\n", optarg);
            sscanf(optarg, "%s", f_name);
            break;
        case 'm':                                               //Проверка аргумента Месяца
            printf("Month number: %s\n", optarg);
            sscanf(optarg, "%d", &month);
            break;
        case '?':                                               //Не определенный аргумент. Завершение программы
            printf("Unknown argument. Use help -h");
            return 1;
        }
    }
    if (read_file(&log_data, f_name) == 0)                      //Чтение файла с данными, если файл не был найде
        return -1;                                              //завершение программы
    if (month < 1 || month > 12)                                //Если номер месяц указан не верно или вообще не был указан 
        stat_year(&log_data);                                   //выводится общая статистика
    else                                                
        cur_month(&log_data, month);
    free(log_data.data_line);
    return 0;
}