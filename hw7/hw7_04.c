//~ 7.04  Дано натуральное число N. Выведите все его цифры по одной,
    //~ в прямом порядке, разделяя их пробелами или новыми строками.
    //~ Необходимо реализовать рекурсивную функцию.
    //~ void print_num(int num)

#include <stdio.h>

void rec_number (int n)
{
    if ( n > 9 )
    {
        rec_number (n/10);
        printf ("%d ", n%10);
    }
    else
        printf ("%d ", n);
}

int main()
{
    int n;
    scanf ("%d", &n);
    rec_number (n);

    return 0;
}

