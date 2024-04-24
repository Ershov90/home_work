/* 10 Составить функцию, печать всех простых множителей числа.
 *  Использовать ее для печати всех простых множителей числа.
    void print_simple(int n)
 */


#include <stdio.h>

void print_simple (int n)
{
    for (int i = 2; n != 1;)
    {
        if ( n % i == 0 )
        {
            printf ("%d ", i);
            n = n / i;
        }
        else
            i++;
    }
            
}

int main(void)
{
    int n;
    scanf ("%d", &n);
    print_simple (n);

    return 0;
}

