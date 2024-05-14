//~ hw 8.02 Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

#include <stdio.h>

#define SIZE 5

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
float arr_armean (int* arr, int n);     //Среднее арифметическое
int arr_min (int* arr, int n);          //Минимальное значение в массиве

int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("%d", arr_min(arr, SIZE));
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

int arr_min (int* arr, int n)
{
    int tmp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (tmp > arr[i])
            tmp = arr[i];
    }
    return tmp;
}
