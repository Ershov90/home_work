/*
hw 10.1
В файле input.txt дана строка. Вывести ее в файл output.txt три раза
через запятую и показать количество символов в ней.
*/
#include <stdio.h>

int main()
{
    FILE *f;
    char str[100]= {0}, c;
    f = fopen("input.txt","r");
    int i = 0, size = 0;
    while (((c = getc(f)) != EOF) && c != '\n')
        str[i++] = c;
    str[i] = '\0';
    fclose(f);
    f = fopen("output.txt", "w");
    printf ("%s %d", str, size);
    fprintf (f, "%s, %s, %s %d", str,str,str,i);
    fclose(f);
    return 0;
}

