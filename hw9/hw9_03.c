/*
9.03
Написать функцию и программу демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в десятичную запись 
натурального числа N, не более 1000 цифр. Цифра пробел сколько раз
данная цифра встречается в числе.
*/

#include <stdio.h>
#include <string.h>

void count_num (char* a,int n, int* counter)
{
    for (int i = 0; i < n; i++)
    {
       switch (a[i])
        {
          case '0' : counter[0]++; break;
          case '1' : counter[1]++; break;
          case '2' : counter[2]++; break;
          case '3' : counter[3]++; break;
          case '4' : counter[4]++; break;
          case '5' : counter[5]++; break;
          case '6' : counter[6]++; break;
          case '7' : counter[7]++; break;
          case '8' : counter[8]++; break;
          case '9' : counter[9]++; break;
        }
    }
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] != 0 )
        printf ("%d %d\n",i, arr[i]); 
    }
}

int main()
{
    char a[1001];
    int counter[10] = {0};
    scanf ("%[0-9]", a);
    count_num (a, strlen(a),counter);
    arr_print (counter, 10);
    return 0;
}

