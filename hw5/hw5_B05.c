//B5. Ввести целое число и найти сумму его цифр.

#include <stdio.h>

int main ()
{
  int a, sum = 0;
  scanf ("%d", &a);
  
  do
  {
    sum += a%10;
    a /= 10;
  }
  while(a != 0);
  
  printf ("%d\n", sum);
  
  return 0;
}
