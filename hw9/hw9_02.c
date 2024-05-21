/*
9.02
Написать только одну функцию, которая ставит в начало массива все четные элементы,
а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. 
Строго согласно прототипу:.
void sort_even_odd(int n, int a[])
*/

#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    int tmp, count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if ((a[i]%2 != 0) && (a[i+1]%2 == 0))
        {
            tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
            count++;
        }
    }
    if (count > 0)
        sort_even_odd(n-1, a);
}

void arr_print (int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf ("\n");
}

int main()
{
    int a[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    sort_even_odd (sizeof (a)/4, a);
    arr_print(a, sizeof (a)/4);
    return 0;
}

