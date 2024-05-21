/*
9.01
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[]).
*/

#include <stdio.h>


void sort_array(int size, int a[])
{
    int tmp, count = 0;
    for (int i = 0; i < size-1; i++)
    {
        if (a[i] > a[i+1])
        {
            tmp = a[i];
            a[i] = a[i+1];
           a[i+1] = tmp;
           count++;
        }
    }
    if (count > 0)
        sort_array(size-1, a);
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");
}

int main()
{
    int a[] = {20,19,4,3,2,1,18,17,13,12,11,16,15,14,10,9,8,7,6,5};
    sort_array (sizeof (a)/4, a);
    arr_print(a, sizeof (a)/4);
    return 0;
}

