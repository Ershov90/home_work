/*
9.05
Написать только одну функцию, которая находит максимальный 
элемент в массиве. Всю программу загружать не надо.
Прототип функции: int find_max_array(int size, int a[])
*/

#include <stdio.h>
#include <string.h>

int find_max_array(int size, int a[])
{
    int tmp = a [0];
    for (int i = 0; i < size; i++)
    {
        if (tmp < a[i] )
            tmp = a[i];
    }
    return tmp;
}

int main()
{
    int a[] = {773,307,371,548,531,765};
    printf ("%d", find_max_array (sizeof (a)/4, a));
    return 0;
}

