#include <stdio.h>

int main(void)
{
	int a;
    scanf ("%d",&a);
    printf ("%d\n", (a%10)*((a/10)%10)*((a/100)%10));
	return 0;
}

