//~ 7.09 Дано натуральное число N. Вычислите сумму его цифр.
//~ Необходимо составить рекурсивную функцию.
//~ int sum_digits(int n)
#include <stdio.h>

int sum_digits(int n)
{
    int sum = n%10;
    if ( n >= 10 )
    {
       sum  += sum_digits (n/10);
    }
    return sum;
}


int main()
{
    int a;
    scanf ("%d", &a);
    printf ("%d",sum_digits (a));
    return 0;
}

