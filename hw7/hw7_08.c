//~ 7.08 Составить рекурсивную функцию, Выведите все числа от A до B
//~ включительно, в порядке возрастания, если A < B, или в порядке убывания
//~ в противном случае.

#include <stdio.h>
int tmp;

void number (int a, int b)
{
    if ( a <= b )
    {
        if ( tmp  <= b )
        {
            printf ("%d ", tmp);
            tmp++;
            number (a, b);
        }
        else
            return;
    }
    if ( a > b )
    {
        if (tmp >= b)
        {
            printf ("%d ", tmp);
            tmp--;
            number (a, b);
        }
        else
            return;
    }
    return;
}


int main()
{
    int a,b;
    scanf ("%d%d", &a, &b);
    tmp = a;
    number (a, b);
    return 0;
}

