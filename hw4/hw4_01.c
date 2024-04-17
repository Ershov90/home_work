//1.Ввести два числа и вывести их в порядке возрастания
#include <stdio.h>

int main()
{
    int a,b;
    scanf ("%d%d", &a,&b);
    a < b ? printf("%d %d", a, b):printf("%d %d", b, a);
    return 0;
}
