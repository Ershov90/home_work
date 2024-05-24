/*
hw 10.4
В файле input.txt даны два слова не более 100 символов каждое, разделенные
одним пробелом. Найдите только те символы слов, которые встречаются
в обоих словах только один раз. Напечатайте их через пробел
в файл output.txt в лексикографическом порядке.
*/
#include <stdio.h>

int main()
{
    char word1[100] = {0};
    char word2[100] = {0};
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    char c;
    int count1 = 0, count2 = 0, count3 = 0;
    while ( (c = fgetc(f_in)) != ' ')
        word1[count1++] = c;
    word1[count1] = '\0';
    //printf ("%s ", word1);
    while ( (c = fgetc(f_in)) != EOF && c != '\n')
        word2[count2++] = c;
    word2[count2] = '\0';
    //printf ("%s ", word2);
    for (int i = 0; i < count1; i++)
    {
        for (int j = 0; j < count2; j++)
        {
            if ( word1[i] == word2[j] )
            {
                count3++;
                for (int r = 0; r < count1; r++)
                {
                    if ( word2[j] == word1[r] )
                        count3++;
                }
            }
        }
        if ( count3 == 2 )
            fprintf (f_out,"%c ", (char) word1[i]);
        count3 = 0;
    }
    fclose(f_in);
    fclose(f_out);
}



