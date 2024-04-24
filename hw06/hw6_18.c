/* 18 Составить логическую функцию, которая определяет, что текущий
 * символ это цифра. Написать программу считающую количество цифр в тексте.
 int is_digit(char c)
 */


#include <stdio.h>

int is_digit(char c)
{
    if (c >= '0' && c <='9')
        return 1;
    else
        return 0;
}

int main(void)
{
    char c;
    int counter = 0;
    while (c != '.')
    {
        c = getchar ();
        counter += is_digit (c);
    }
    printf ("%d", counter);

    return 0;
}

