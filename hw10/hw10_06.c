/*
hw 10.6
В файле input.txt символьная строка не более 1000 символов.
Необходимо проверить, является ли она палиндромом (палиндром читается
одинаково в обоих направлениях). Реализовать логическую функцию
is_palindrom(str) и записать ответ в файл output.txt.
*/
#include <stdio.h>
#include <string.h>

int is_palindrom (char str[])
{
    int size = strlen(str);
    for (int i =0; i < size/2; i++)
    {
        if (str[i] != str[size-1-i] )
            return 0;
    }
    return 1;

}
int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char str [1000];
    fscanf (f_in, "%s", str);
    if ( is_palindrom(str) )
        fprintf(f_out, "YES", NULL);
    else
        fprintf(f_out, "NO", NULL);
    fclose(f_in);
    fclose(f_out);
}



