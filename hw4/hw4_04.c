//4.Напечатать сумму максимума и минимума.
#include <stdio.h>

int main()
{
    int a, b, c, d, e, max, min;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    max =  a > b ?  a : b;                  //поиск максимального числа
    max = max> c ? max: c;
    max = max> d ? max: d;
    max = max> e ? max: e;
    
    min = a < b ? a : b;                    //поиск минимального числа
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;
    
    printf("%d", max+min);
    
    return 0;
    
}