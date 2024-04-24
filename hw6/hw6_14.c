/* 14 Составить функцию логическую функцию, которая определяет,
 *  верно ли, что сумма его цифр – четное число.
 *  Используя эту функцию решить задачу.
 */


#include <stdio.h>

void check_sum (int a)
{
    int sum = 0;
    while ( a != 0 )
    {
        sum += ( a % 10 );
        a /= 10;
    }
    
    if (sum%2 == 0)
        printf ("YES");
    else
        printf ("NO");
    
}

int main(void)
{
    int a;
    scanf ("%d", &a);
    check_sum (a);
    
    return 0;
}

