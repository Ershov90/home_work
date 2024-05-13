//~ 7.02  Составить рекурсивную функцию, которая определяет сумму всех
//~ чисел от 1 до N

#include <stdio.h>

int rec_sum (int n)
{
    if ( n != 1 )
    {
        printf ("%d\n", n);
       return (n + rec_sum(n-1));
    }
    return 1;
}

int main()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", rec_sum (n));
    
    return 0;
}

