/*  06
    Когда создатель шахмат, древнеиндийский мудрец и математик 
    Сисса бен Дахир, показал своё изобретение Правителю страны, тому
    ак понравилась игра, что он позволил изобретателю право самому
    выбрать награду. Мудрец попросил у Повелителя за первую клетку 
    шахматной доски заплатить ему одно зерно риса, за второе — два, 
    за третье — четыре и т. д., удваивая количество зёрен на каждой 
    следующей клетке. Помоги повелителю сосчитать сколько зерен на какой
    клетке лежит.
    Необходимо составить функцию, которая определяет, сколько зерен
    попросил положить на N-ую клетку изобретатель шахмат
    (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …)
 */
 
 
#include <stdio.h>
#include <inttypes.h>


uint64_t zerno (int kletka)
{
    uint64_t x = 1;
    if (kletka == 1)
        return 1;
        
    for (int i = 1; i < kletka; i++)
        x = x*2;
        
    return x;
}

int main(void)
{
    int kletka;
    scanf ("%d", &kletka);
    printf ("%"PRIu64, zerno (kletka));
    
    return 0;
}

