//B7. Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.

#include <stdio.h>

int main ()
{
  int a, b , c, res = 0;
  scanf ("%d", &a);
  
  while (a > 9)
  {
     b = a%10;
     
     for (int i = a/10; i > 0; i = i / 10)
     {
        c = i%10;
        if (c == b)
        {
            res += 1;
            break;
        }
     }
     
     if (res == 1)
        break;
     a /= 10;
  }
  
  printf ("%s", res == 1 ? "YES\n" : "NO\n");
  return 0;
}
