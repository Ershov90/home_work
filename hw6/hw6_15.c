/* 15 Составить функцию логическую функцию, которая определяет,
 *  верно ли, что в заданном числе все цифры стоят по возрастанию.
 *  Используя данную функцию решить задачу.
    int grow_up(int n)
 */


#include <stdio.h>

int grow_up (int n)
{
    while( n > 9 )
    {
        if ( n % 10 > (n / 10) % 10)
        {}
        else
            return 0;
        n /= 10;
    }
    return 1;
}

int main(void)
{
    int n;
    scanf ("%d", &n);
    printf ("%s", grow_up (n) == 0 ? "NO" : "YES");
    return 0;
}

