/* 20 Проверить строку состоящую из скобок "(" и ")" на корректность.
 */


#include <stdio.h>

int check (char c)
{
    if ( c == '(')
        return -1;
    if ( c == ')')
        return 1;
    return 0;
}

int main(void)
{
    char c;
    int counter = 0, error = 0;
    while (c != '.')
    {
        c = getchar ();
        counter += check (c);
        if (counter > 0)
            error++;
    }
    if (error != 0)
        printf ("NO");
    else
        printf ("%s", counter == 0 ? "YES" : "NO");

    return 0;
}

