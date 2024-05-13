//~ 7.05  Перевести натуральное число в двоичную систему счисления.
//~ Необходимо реализовать рекурсивную функцию.

#include <stdio.h>

void rec_bin (int n)
{
    if ( n > 1)
    {
        rec_bin (n/2);
        printf ("%d", n%2);
    }
    else
        printf("%d",n);
}

int main()
{
    int n;
    scanf ("%d", &n);
    rec_bin (n);

    return 0;
}

