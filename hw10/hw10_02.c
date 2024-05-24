/*
hw 10.2
Считать число N из файла input.txt. Сформировать строку из N символов.
N четное число, не превосходящее 26. На четных позициях должны находится
четные цифры в порядке возрастания, кроме 0, на нечетных позициях -
заглавные буквы в порядке следования в английском алфавите.
Результат записать в файл output.txt
*/
#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("input.txt","r");
    int N = 0;
    fscanf (f, "%d", &N);
    fclose (f);
    char c = 'A', str[N], tmp = '0';
    str [0] = '\0';
    for (int i = 1; i < N+1; i++)
    {
        if (i%2 != 0)
            str[i-1] = c++;
        else
        {
            tmp += 2;
            str[i-1] = tmp;
            if (tmp == '8')
            tmp = '0';
         }   
    }
    str [N] = '\0';
    f = fopen ("output.txt", "w");
    fprintf (f, str);
    fclose(f);
    return 0;
}

