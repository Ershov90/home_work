/*
9.04
Написать только одну функцию. Всю программу отправлять не надо. 
Вывести в порядке возрастания цифры, входящие в строку. 
Цифра - количество. Функция должно строго соответствовать прототипу:
void print_digit(char s[])
*/

#include <stdio.h>
#include <string.h>

void print_digit(char s[])
{
    int counter[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
       switch (s[i])
        {
          case '0' : counter[0]++; break;
          case '1' : counter[1]++; break;
          case '2' : counter[2]++; break;
          case '3' : counter[3]++; break;
          case '4' : counter[4]++; break;
          case '5' : counter[5]++; break;
          case '6' : counter[6]++; break;
          case '7' : counter[7]++; break;
          case '8' : counter[8]++; break;
          case '9' : counter[9]++; break;
        }
    }
        
    
    for (int i = 0; i < 10; i++)
    {
        if ( counter[i] != 0 )
        printf ("%d %d\n",i, counter[i]); 
    }
}



int main()
{
    char a[]="Hello123 world77.\0";
    print_digit(a);
    return 0;
}

