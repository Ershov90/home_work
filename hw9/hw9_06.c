/*
9.06
Написать только одну логическую функцию, которая определяет, верно ли,
что среди элементов массива есть два одинаковых. Если ответ «да»,
функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);
*/

#include <stdio.h>
#include <string.h>

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
            if ( a[i] == a[j])
                return 1;
    }
    return 0;
}


int main()
{
    int a[] = {773,307,371,548,317,765};
    printf ("%d",is_two_same(sizeof a/4, a));
    return 0;
}

