/* 17 Составить логическую функцию, которая определяет, верно ли,
 *  что в заданном числе сумма цифр равна произведению.
    int is_happy_number(int n)
 */


#include <stdio.h>

int is_happy_number(int n)
{
    int a = n, sum = 0, pro = 1;
    while ( a != 0 )
    {
        sum += ( a % 10 );
        a /= 10;
    }
    a = n;
    while ( a != 0 )
    {
        pro *= ( a % 10 );
        a /= 10;
    }
    return sum == pro ? 1 : 0 ;
}

int main(void)
{
    int n;
    scanf ("%d", &n);
    printf ("%s", is_happy_number (n) == 0 ? "NO" : "YES");
    return 0;
}

