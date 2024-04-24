// 01. Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
#include <stdio.h>

int power (int n, int p)
{
    int n_out = n;
    for (int i = p; i > 1; i--)
        n_out = n_out * n;
    return n_out;
}

int main(void)
{
    int n, p;
    scanf ("%d%d", &n, &p);
    printf ("%d",power(n,p));

    return 0;
}

