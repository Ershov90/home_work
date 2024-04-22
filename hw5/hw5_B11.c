//B11. Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

#include <stdio.h>

int main ()
{
  int a, b = 1, c = 0;
  scanf ("%d", &a);
  
  for (int i = a; i > 9; i = i/10)
  {
      b = b*10;
  }
  
  for (int i = a; i > 0; i = i/10)
  {
    c += b*(i%10);
    b = b/10;
  }
  
  printf ("%d\n", c);
 
  return 0;
}
