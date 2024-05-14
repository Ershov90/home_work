//~ hw 8.11 Считать массив из 10 элементов и отсортировать
//~ его по последней цифре.

#include <stdio.h>

#define SIZE 10

void arr_enter (int* arr, int n);       //Заполнение массива
void arr_print (int* arr, int n);       //Печать массива
int arr_min_num (int* arr, int n);      //№ Минимального значения в массиве
void arr_sort_lastnum (int* arr, int n);//Сортировка по последней цифре 


int main()
{
    int arr[SIZE] = {0};
    arr_enter (arr, SIZE);
    arr_sort_lastnum (arr, SIZE);
    arr_print (arr, SIZE);
    return 0;
}

void arr_sort_lastnum (int* arr, int n)
{
    int tmp[SIZE] = {0}, tmp_num, tmp_i;
    for (int i = 0; i < n; i++)
    {
        tmp[i] = arr[i];
        if ( tmp[i] > 9 )
        {
            tmp[i] %=10;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (arr_min_num (&tmp[i], n-i)+i != i)
        {
            tmp_num = tmp[i];
            tmp_i = arr_min_num (&tmp[i], n-i)+i;
            tmp[i] = tmp [tmp_i];
            tmp[tmp_i] = tmp_num;

            tmp_num = arr[i];
            arr[i] = arr [tmp_i];
            arr[tmp_i] = tmp_num;
        }
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
    printf ("\n");
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

