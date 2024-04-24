/* 11 Составить функцию, которая определяет наибольший общий делитель 
 * двух натуральных и привести пример ее использования.
 *  int nod(int a, int b)
 */


#include <stdio.h>

int nod (int a, int b)
{
    int min;
    min = a < b ? a : b ;
    while ( min != 1)
    {
        if ((a % min == 0) && (b % min == 0))
            return min;
        min--;
    }
    return 1;
}

int main(void)
{
    int a, b;
    scanf ("%d%d", &a, &b);
    printf ("%d", nod (a,b));

    return 0;
}

