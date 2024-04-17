//7.Наибольшее из пяти чисел
#include <stdio.h>

int main()
{
    int a, b, c, d, e, max, min;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    max =  a > b ?  a : b;                  //поиск максимального числа
    max = max> c ? max: c;
    max = max> d ? max: d;
    max = max> e ? max: e;
    
	printf("%d", max);
    
    return 0;
    
}