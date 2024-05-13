//~ 7.07  Составить рекурсивную функцию, печать всех чисел от N до 1.

#include <stdio.h>

void number (int n)
{
    printf ("%d ", n);
    if ( n > 1 )
        number (--n);
    return;
}

int main()
{
    int n;
    scanf ("%d", &n);
    number (n);
    return 0;
}

