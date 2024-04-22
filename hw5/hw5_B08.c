//B8. Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

#include <stdio.h>

int main ()
{
  int a, b , c = 9, res = 0;
  scanf ("%d", &a);
  
  for (int i = a; i >= c; i = i / 10)
  {
    b = i%10;
    if (c == b)
        res += 1;
    if (res >= 2)
        break;
  }
  
  printf ("%s", res == 1 ? "YES\n" : "NO\n");
  
  return 0;
}
