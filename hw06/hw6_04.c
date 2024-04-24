/*
04. Описать функцию вычисления f(x) по формуле:
f(x)= x*x при -2 ≤ x < 2;
x*x+4x+5 при x ≥ 2;
4 при x < -2.
*/


#include <stdio.h>

int calc (int x)
{
    int f;
    if ((-2 <= x) && (x < 2))
        f = x*x;
    if (x >= 2)
        f = x*x+4*x+5;
    if (x < -2)
        f = 4;
        
    return f;
}

int main(void)
{
    int n, max;
    do
    {
        scanf ("%d", &n);
        if (calc (n) > max)
            max = calc (n);
    }
    while ( n != 0);
    
    printf ("%d", max);

    return 0;
}

