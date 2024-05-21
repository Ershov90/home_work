/*
9.09
Составить только функцию которая в массиве находит максимальный из отрицательных
элементов и меняет его местами с последним элементом массива.
Гарантируется, что в массиве только один такой элемент или же такой
элемент отсутствует. Если отрицательных элементов нет - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])
*/

#include <stdio.h>
#include <string.h>


void swap_negmax_last(int size, int a[])
{
    int tmp_negmax = a[0], tmp_negmax_i = 0, tmp_last = a [size-1];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] <= tmp_negmax && a[i] < 0 )
            tmp_negmax = a [i];
    }
    for (int i = 0; i < size; i++)
    {
        if ( a[i] < 0 && a[i] >= tmp_negmax )
        {
            count ++;
            tmp_negmax = a[i];
            tmp_negmax_i = i;
        }
    }
    if (count)
    {
        a[size-1] = tmp_negmax;
        a[tmp_negmax_i]= tmp_last;
    }
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");
}

int main()
{
    int a[] = {-100,2,3};
    arr_print (a, sizeof (a)/4);
    swap_negmax_last (sizeof (a)/4, a);
    arr_print (a, sizeof (a)/4);
    return 0;
}

