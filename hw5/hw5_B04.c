//B4. Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

#include <stdio.h>

int main ()
{
  int a;
  scanf ("%d", &a);
  printf ("%s\n", a/1000 == 0 && a > 99 ? "YES" : "NO");
  
  return 0;
}
