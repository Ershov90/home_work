/* 09 Составить функцию вычисления N!. Использовать ее при вычислении
 *  факториала
 *  int factorial(int n)
 */


#include <stdio.h>

int factorial (int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res = res * i;
    return res;
}

int main(void)
{
    int n;
    scanf ("%d", &n);
    printf ("%d", factorial(n));
    return 0;
}

