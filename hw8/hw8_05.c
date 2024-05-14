//~ hw 8.05 Считать массив из 10 элементов и посчитать сумму 
//~ положительных элементов массива.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
int arr_sum_pos (int* arr, int n);      //Сумма положительных


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("%d", arr_sum_pos(arr, SIZE));
    return 0;
}

int arr_sum_pos (int* arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr [i] > 0)
            sum += arr[i];
    }
    return sum;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
}

