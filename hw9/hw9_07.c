/*
9.07
Написать функцию, которая сжимает серии массива, состоящего из единиц и 
нулей по следующему принципу: например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1]
преобразуется в [4,7,2,4] (т.к. начинается с нуля, то сразу записывается 
количество элементов первой серии); а массив [1,1,1,0,0,0,0,0,0,0] 
преобразуется в [0,3,7] (т.к. первая серия - это единицы, то первый 
элемент преобразованного массива 0).
Необходимо реализовать только одну функцию, всю программу загружать
не надо. Прототип функции: int compression(int a[], int b[], int N)
*/

#include <stdio.h>
#include <string.h>

int compression(int a[], int b[], int N)
{
    int counter = 0, tmp = a[0], calc = 1;
    if ( a[0] == 1 )
    {
        b[0] = 0;
        counter = 1;
    }
    for (int i = 0 ; i < N; i++)
    {
        if ( tmp == a[i+1] && i < N-1 )
        {
            calc++;
        }
        else
        {
            b[counter] = calc;
            counter++;
            calc = 1;
            tmp = a [i+1];
        }
    }
    return counter;
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
}

int main()
{
    int a[] = {1,1,0,0,1,1,1,0,1,1,0,0,1,0,1,0,0,1,0,0,0,0,1,1,1};
    int b[sizeof(a)/4] = {0};
    arr_print (a, sizeof(a)/4);
    printf ("\n%d\n", compression (a, b, sizeof(a)/4));
    arr_print (b, sizeof(b)/4);
    return 0;
}

