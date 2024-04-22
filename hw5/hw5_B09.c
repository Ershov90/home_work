//B9. Ввести целое число и определить, верно ли, что все его цифры четные.

#include <stdio.h>

int main ()
{
  int a, b;
  scanf ("%d", &a);
  
  for (int i = a; i >= 1; i=i/10)
  {
    b = i%10;
    if (b%2 != 0)
    {
        printf("NO\n");
        goto skip;
    }
  }
  
  printf ("YES\n");
skip:
  return 0;
}