/*
hw 10.8
В файле input.txt дана строка, не более 1000 символов, содержащая буквы,
целые числа и иные символы. Требуется все числа, которые встречаются в строке,
поместить в отдельный целочисленный массив. Например, если дана строка
"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0.
Вывести массив по возрастанию в файл output.txt.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void * x, const void * y)
{
    return ( *(int*)x - *(int*)y );
}

int main()
{
    FILE *f_in = fopen("input.txt","r");
    FILE *f_out = fopen("output.txt", "w");
    int num[1000] = {0}, i = 0, count =-1,tmp = -2;
    char c;
    while ( (c=fgetc(f_in)) != EOF )
    {
        if (c >= '0' && c <= '9')
        {
            if ( tmp+1 == i)
            {
                num[count] *= 10;
                num[count] += c-'0';
                tmp++;
            }
            else
                num[++count] = c-'0';
            tmp = i;
        }
        i++;
    }
    qsort(num, count+1, sizeof(int), compare);
    for (i = 0; i <= count; i++)
    {
        fprintf(f_out, "%d ", num[i]);
    }
    fclose(f_in);
    fclose(f_out);
}



