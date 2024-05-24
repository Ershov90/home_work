/*
hw 10.10
В файле input.txt дана строка слов, разделенных пробелами.
Найти самое длинное слово и вывести его в файл output.txt.
Случай, когда самых длинных слов может быть несколько, не обрабатывать.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int word (char str[], FILE *f)
{
    char c;
    int i = 0;
    while ( (c=fgetc(f)) != EOF && c != ' ')
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return c != EOF ? 1:0;
}

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char str[1001] = {0}, tmp[1001] = {0};
    int r = 1;
    while ( r )
    {
        if (strlen(str) >= strlen(tmp))
            r = word (tmp, f_in);
        else
            r = word (str, f_in);
    }
    strlen (str) > strlen (tmp) ? fprintf (f_out, "%s", str) : fprintf (f_out, "%s", tmp);
    fclose(f_in);
    fclose(f_out);
}



