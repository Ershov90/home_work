//~ hw 8.06 ССчитать массив из 12 элементов и посчитать среднее 
//~ арифметическое элементов массива.

#include <stdio.h>

#define SIZE 12

void arr_enter (int* arr, int n);       //Заполнение массива
float arr_armean (int* arr, int n);     //Среднее арифметическое

int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("%.2f", arr_armean(arr, SIZE));
    return 0;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
}

float arr_armean (int* arr, int n)
{
    int tmp = 0 ;
    for (int i = 0; i < n; i++)
        tmp += arr[i];
    return (float) tmp / n;
}
