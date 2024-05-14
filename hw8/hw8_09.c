//~ hw 8.09 Считать массив из 10 элементов и выполнить циклический 
//~ сдвиг ВПРАВО на 1.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
void arr_shiftpos (int* arr, int n);    //Сдвиг на 1 позицию



int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    arr_shiftpos (arr, SIZE);
    arr_print (arr, SIZE);
    return 0;
}

void arr_shiftpos (int* arr, int n)
{
    int tmp = arr[n-1];
    for (int i = n-1; i > 0 ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = tmp;
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
    printf ("\n");
}
