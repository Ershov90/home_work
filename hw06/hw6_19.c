/* 19 Составить функцию, которая преобразует текущий символ цифры
 * в число. Написать программу считающую сумму цифр в тексте.
    int digit_to_num(char c)
 */


#include <stdio.h>

int digit_to_num(char c)
{
    switch (c)
    {
    case '0' : return 0;
    case '1' : return 1;
    case '2' : return 2;
    case '3' : return 3;
    case '4' : return 4;
    case '5' : return 5;
    case '6' : return 6;
    case '7' : return 7;
    case '8' : return 8;
    case '9' : return 9;
    default  : return 0;
    }
}

int main(void)
{
    char c;
    int counter = 0;
    while (c != '.')
    {
        c = getchar ();
        counter += digit_to_num (c);
    }
    printf ("%d", counter);

    return 0;
}

