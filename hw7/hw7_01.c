//~ 7.01 Составить рекурсивную функцию, печать всех чисел от 1 до N

#include <stdio.h>

void number (int n)
{
    if ( n > 1 )
        number (n-1);
    printf ("%d ", n);
}

int main()
{
    int n;
    scanf ("%d", &n);
    number (n);
    return 0;
}

