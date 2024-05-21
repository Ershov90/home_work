/*
9.10
Дана строка состоящая из маленьких латинских букв 'a'..'z'.
В конце строки точка. Необходимо заменить повторяющиеся 
буквы на <буква><количество повторений>
*/

#include <stdio.h>
#include <string.h>

#define SIZE_STR 1000

void compression_str (char a[], char b[])
{
    int count = 1, i=0, j=0;
    while( a[i] )
    {
        if (a [i] == a[i+1] )
            count++;
        else
        {
            char tmp[count+1];
            int n = 0;
            b[j++] = a[i];
            sprintf (tmp, "%d", count);
            while (tmp[n])
                b[j++] = tmp [n++];
            count = 1;
        }
        i++;
    }
    b[j] = '\0';
}

int main()
{
    char a[SIZE_STR] = {0}, c;
    int i=0;
    while( (c=getchar())!='.' )
        a[i++]=c;
    a[i]='\0';
    char b[SIZE_STR] = {0};
    compression_str (a,b);
    printf ("%s", b);
    return 0;
}

