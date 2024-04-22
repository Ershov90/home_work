//B6. Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.

#include <stdio.h>

int main ()
{
  int a, b , c, res = 0;
  scanf ("%d", &a);
  
  while (a > 9)
  {
     b = a%10;
     c = a/10%10;
     if (b == c)
     {
       res += 1;
       break;
     }
     
     a /= 10;
  }
  
  printf ("%s", res == 1 ? "YES\n" : "NO\n");
  return 0;
}
