//~ 7.06  Дана строка заканчивающаяся символом точка '.' Напечатать строку
//~ наоборот. Реализуйте рекурсивную функцию, которая считывает и печатает
//~ строку наоборот.
//~ void reverse_string()

#include <stdio.h>

void reverse_string()
{
    char string;
    scanf ("%c", &string);
    if (string !='.')
    {
        reverse_string();
        printf("%c", string);
    }
    return;
}
int main()
{
    reverse_string();
    return 0;
}

