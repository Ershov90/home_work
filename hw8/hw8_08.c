//~ hw 8.08 ССчитать массив из 12 элементов и выполнить инверсию
//~ для каждой трети массива.

#include <stdio.h>

#define SIZE 12

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
void arr_thirdshift (int* arr, int n);  //Инверсия по половине 3й части


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    arr_thirdshift (arr, SIZE);
    arr_print (arr, SIZE);
    return 0;
}

void arr_thirdshift (int* arr, int n)
{
    int tmp;
    for (int i = 0; i < n/3/2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n/3-i-1];
        arr[n/3-i-1] = tmp;
        
        tmp = arr [n/3+i];
        arr[n/3+i] = arr[(n/3)*2-i-1];
        arr[(n/3)*2-i-1] = tmp;
        
        tmp = arr[(n/3)*2+i];
        arr[(n/3)*2+i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
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

