/* 08 Составить функцию, которая переводит латинскую строчную букву
 *  в заглавную. И показать пример ее использования.
 */


#include <stdio.h>



char regist (char c)
{
    if ( c >= 'a' && c <= 'z')
        return putchar ( 'A' + (c-'a'));
    return putchar (c);
}

int main(void)
{
    char c;
    while ( (c=getchar()) != '.')
        regist (c);
        
    return 0;
}

