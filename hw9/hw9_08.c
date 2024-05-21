/*
9.08
В последовательности записаны целые числа от M до N ( M меньше N,
M больше или равно 1)в произвольном порядке, но одно из чисел пропущено
(остальные встречаются ровно по одному разу). N не превосходит 1000. 
Последовательность заканчивается числом 0. Определить пропущенное число.
*/

#include <stdio.h>
#include <string.h>
#define ARR_SIZE 1000

int arr_min (int* arr, int n)
{
    int tmp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            return tmp;
        if (tmp > arr[i])
            tmp = arr[i];
    }
    return tmp;
}

int lost_num (int a[], int size)
{
    int lost = arr_min(a, ARR_SIZE);
    for (int i = 0; i < size-1; i++)
    {
        if (a[i] == 0)
            return lost;
        if ( lost == a[i] )
        {
            lost++;
            i = -1;
        }
    }
    return lost;
}

void arr_enter (int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
        if (arr[i] == 0)
            break;
    }
}

int main()
{
    int a[ARR_SIZE] = {0};
    arr_enter (a, ARR_SIZE);
    printf ("\n%d", lost_num(a, ARR_SIZE));
    return 0;
}

