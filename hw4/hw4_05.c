//5.Определить уравнение прямой по координатам двух точек. 
#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;
    float k, b;
    
    scanf ("%d%d%d%d", &x1, &y1, &x2, &y2);
    
    k = (float)(y2-y1)/(x2-x1);
    b = (float)(x1*(y2-y1))/(x1-x2)+y1;
    
    printf ("%.2f %.2f", k, b);
    
    return 0;
    
}