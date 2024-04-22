//B2. Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.

#include <stdio.h>

int main ()
{
  int a, b;
  scanf ("%d%d", &a, &b);
  for (int i = a; i <= b ;i++)
  {
      printf ("%d ", i*i);
  }
  
  return 0;
}
