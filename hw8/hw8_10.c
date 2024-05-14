//~ hw 8.10 Считать массив из 12 элементов и выполнить циклический
//~ сдвиг ВПРАВО на 4 элемента.

#include <stdio.h>

#define SIZE 12

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
void arr_shiftpos_r4 (int* arr, int n); //Сдвиг на 4 позицию

int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    arr_shiftpos_r4 (arr, SIZE);
    arr_print (arr, SIZE);
    return 0;
}

void arr_shiftpos_r4 (int* arr, int n)
{
    int tmp3 = arr[n-1], tmp2 = arr[n-2], tmp1 = arr[n-3], tmp0 = arr[n-4];
    for (int i = n-1; i > 3 ; i--)
    {
        arr[i] = arr[i-4];
    }
    arr[0] = tmp0;
    arr[1] = tmp1;
    arr[2] = tmp2;
    arr[3] = tmp3;
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
