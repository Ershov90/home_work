//B10. Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.

#include <stdio.h>

int main ()
{
  int a, b, c, count = 1;
  scanf ("%d", &a);
  while (a > 0)
  {
    b = a%10;
    c = a/10%10;
    if (b < c || b == c)
    {
      printf ("NO\n");
      count = 0;
      break;
    }
    a = a/10;
    
  }
  
  if (count != 0)
    printf ("YES");
    
  return 0;
}
