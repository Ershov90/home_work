/*
hw 10.11
В файле input.txt дано предложение. Необходимо определить, сколько
слов заканчиваются на букву 'а'. Ответ записать в файл output.txt.
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
    return c != EOF ? 0:1;
}

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char str[1001] = {0};
    int r = 0, size = 0, count = 0;
    while ( r == 0  )
    {
        r = word(str, f_in);
        size = strlen(str);
        if (str[size-1-r] == 'a')
            count++;
    }
    printf ("%d", count);
    fprintf (f_out, "%d", count);
    fclose(f_in);
    fclose(f_out);
}



