//6. Above, less, equal
#include <stdio.h>

int main()
{
    int a, b;
    
    scanf ("%d%d", &a, &b);
    
    if (a>b)
    printf ("Above");
    if (a<b)
    printf ("Less");
    if (a==b)
    printf ("Equal");
   
    return 0;
}