/*
hw 10.3
В файле input.txt дана строка из 1000 символов. Показать номера символов,
совпадающих с последним символом строки. Результат записать в файл output.txt
*/
#include <stdio.h>

int main()
{
    int count = 0;
    char c, last_symbol;
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    while ( (c = fgetc(f_in)) != EOF  && c != '\n')
    {
        count ++;
        last_symbol = c;
    }
    printf("Count-%d last_symbol-%c", count, last_symbol);
    fseek(f_in, 0, SEEK_SET);
    for (int i = 0; i < count-1; i++)
    {
        c = fgetc(f_in);
        if ( c == last_symbol )
        fprintf (f_out,"%d ", i);
    }
    fclose (f_in);
    fclose (f_out);
}



