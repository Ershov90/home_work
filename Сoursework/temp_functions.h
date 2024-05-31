#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

typedef struct DATA_t               //Структура данных
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
} DATA_t;

typedef struct LOG_t               //Структура данных с кол-во строк
{
    uint32_t cnt_line;
    DATA_t data_line[550000];      //~Максимально кол-во записей за год 365дней*24часа*60минут
} LOG_t;

int read_file(LOG_t *log, char *file_name);
void cur_month (LOG_t *log, int month);
void stat_year (LOG_t *log);
