/*
hw 10.5
В файле input.txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот, 
как заглавные, так и строчные. Результат записать в output.txt.
*/
#include <stdio.h>

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char c;
    while ( (c=fgetc(f_in)) != EOF && c != '\n')
    {
        switch (c)
        {
            case 'A': c = 'B'; fprintf (f_out, "%c", c); break;
            case 'B': c = 'A'; fprintf (f_out, "%c", c); break;
            case 'a': c = 'b'; fprintf (f_out, "%c", c); break;
            case 'b': c = 'a'; fprintf (f_out, "%c", c); break;
            default : fprintf (f_out, "%c", c); break;
        }
    fclose(f_in);
    fclose(f_out);
}



