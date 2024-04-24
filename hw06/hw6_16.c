/* 16 Составить функцию логическую функцию, которая определяет,
 *  верно ли, что число простое. Используя функцию решить задачу.
    int is_prime(int n)
 */


#include <stdio.h>

int is_prime (int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
        if ( (n % i) == 0)
            counter++;
        if (counter > 2)
            return 0;
    }
    if ( counter == 1  || counter == 0)
        return 0;
    return 1;
}

int main(void)
{
    int n;
    scanf ("%d", &n);
    printf ("%s", is_prime (n) == 0 ? "NO" : "YES");
    return 0;
}

