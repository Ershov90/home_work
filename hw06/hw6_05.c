//05.Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

#include <stdio.h>

int sum_serias (int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++)
        sum += i;
        
    return sum;
}

int main(void)
{
    int a;
    scanf ("%d", &a);
    printf ("%d", sum_serias (a));
    
    return 0;
}

