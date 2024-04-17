//8.Наименьшее из пяти чисел
#include <stdio.h>

int main()
{
    int a, b, c, d, e, max, min;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
        
    min = a < b ? a : b;                    //поиск минимального числа
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;
    
    printf("%d", min);
    
    return 0;
    
}