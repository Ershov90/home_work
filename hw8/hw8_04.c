//~ hw 8.04 Считать массив из 10 элементов и найти в нем два
//~ максимальных элемента и напечатать их сумму.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
int arr_sum2max (int* arr, int n);      //Сумма 2ух наибольших


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("%d", arr_sum2max(arr, SIZE));
    return 0;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
}

int arr_sum2max (int* arr, int n)
{
    int tmp = arr[0], tmp_n = 0;
    int tmp2;
    for (int i = 0; i < n; i++)
    {
        if (tmp < arr[i])
        {
            tmp2 = tmp;
            tmp = arr[i];
            tmp_n = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ( tmp2 <= arr[i] && i != tmp_n )
            tmp2 = arr[i];
    }
    return tmp+tmp2;
}
