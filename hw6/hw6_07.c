/* 07 Составить функцию, которая переводит число N из десятичной системы
 * счисления в P-ичную систему счисления.
 */


#include <stdio.h>

int perevod (int n, int p)
{
    int number_p = 0, i = 1;
    while ( n > 0 )
    {
        number_p += (n % p) * i;
        n = n / p;
        i = i * 10;
    }
    return number_p;
}

int main(void)
{
    int n, p;
    scanf ("%d%d", &n, &p);
    printf ("%d", perevod (n, p));
    return 0;
}

