/*
hw 10.7
В файле input.txt считать символьную строку, не более 10 000 символов.
Посчитать количество строчных (маленьких) и прописных (больших) букв 
в введенной строке. Учитывать только английские буквы. 
Результат записать в файл output.txt.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    int counter_a = 0, counter_A = 0;
    char c;
    while ( (c=fgetc(f_in)) != EOF && c != '\n')
    {
        if (c >= 'A' && c <= 'Z')
        counter_A++;
        if (c >= 'a' && c <= 'z')
        counter_a++;
    }
    fprintf (f_out, "%d ", counter_a);
    fprintf (f_out, "%d ", counter_A);
    fclose(f_in);
    fclose(f_out);
}



