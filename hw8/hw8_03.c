//~ hw 8.03 Считать массив из 10 элементов и найти в нем максимальный
//~ и минимальный элементы и их номера.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
int arr_min (int* arr, int n);          //Минимальное значение в массиве
int arr_max (int* arr, int n);          //Максимальное значение в массиве
int arr_min_num (int* arr, int n);      //№ Минимального значения в массиве
int arr_max_num (int* arr, int n);      //№ Максимального значения в массиве


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    printf ("%d ", arr_max_num(arr, SIZE)+1);
    printf ("%d ", arr_max(arr, SIZE));
    printf ("%d ", arr_min_num(arr, SIZE)+1);
    printf ("%d ", arr_min(arr, SIZE));
    return 0;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
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

int arr_max (int* arr, int n)
{
int tmp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (tmp < arr[i])
            tmp = arr[i];
    }
    return tmp;
}

int arr_min_num (int* arr, int n)
{
    int tmp = arr[0], tmp_n = 0;
    for (int i = 0; i < n; i++)
    {
        if (tmp > arr[i])
        {
            tmp = arr[i];
            tmp_n = i;
        }
    }
    return tmp_n;
}

int arr_max_num (int* arr, int n)
{
    int tmp = arr[0], tmp_n = 0;
    for (int i = 0; i < n; i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
            tmp_n = i;
        }
    }
    return tmp_n;
}

