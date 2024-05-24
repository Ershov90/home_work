/*
hw 10.9
В файле input.txt строка из меленьких и больших английских букв, знаков
препинания и пробелов. Требуется удалить из нее повторяющиеся символы
и все пробелы. Результат записать в файл output.txt.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char c, str [53];
    int i = 0, count = 0;
    while ( (c=fgetc(f_in)) != EOF )
    {
        if ((c >= 'A' && c <='Z') || (c >= 'a' && c <='z') )
        {
            for (int j = 0; j < i; j++)
            {
                if (str[j] == c)
                    break;
                else
                    count++;
            }
            if ( count == i)
                str[i++] = c;
        }
        count = 0;

    }
    str[i] = '\0';
    fprintf (f_out,"%s", str);
    fclose(f_in);
    fclose(f_out);
}



