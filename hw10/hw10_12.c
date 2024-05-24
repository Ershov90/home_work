/*
hw 10.12
В файле input.txt дано предложение требуется разобрать его на отдельные
слова. Напечатать каждое слово на отдельной строке в файл output.txt.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int word (char str[], FILE *f)
{
    char c;
    int i = 0;
    while ( (c=fgetc(f)) != EOF && c != ' ' && c != '\n')
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
    int r = 0;
    while ( r == 0  )
    {

        r = word(str, f_in);
        if (strlen(str))
        {
            fprintf (f_out, "%s\n", str);
           // printf ("%s\n %lld", str, strlen(str));
        }
    }
    fclose(f_in);
    fclose(f_out);
}



