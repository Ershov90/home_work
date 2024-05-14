//~ hw 8.01 Ввести c клавиатуры массив из 5 элементов,
//~ найти среднее арифметическое всех элементов массива.

#include <stdio.h>

#define SIZE 5

void arr_enter (int* arr, int n);           //Заполнение массива
void arr_print (int* arr, int n);           //Печать массива
float arr_armean (int* arr, int n);         //Среднее арифметическое

int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("\n%.3f", arr_armean (arr, SIZE));
    return 0;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
}

float arr_armean (int* arr, int n)
{
    int tmp = 0 ;
    for (int i = 0; i < n; i++)
        tmp += arr[i];
    return (float) tmp / n;
}