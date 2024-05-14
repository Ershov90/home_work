//~ hw 8.07Считать массив из 10 элементов и выполнить инверсию отдельно 
//~ для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив 
//~ и напечатать его одним циклом.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
void arr_halfshift (int* arr, int n);   //Инверсия по половине


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    arr_halfshift (arr, SIZE);
    arr_print (arr, SIZE);
    return 0;
}

void arr_halfshift (int* arr, int n)
{
    int tmp;
    for (int i = 0; i < n/2/2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[n/2-i-1];
        arr[n/2-i-1] = tmp;
		
        tmp = arr [n/2+i];
        arr[n/2+i] = arr[n-i-1];
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
