#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "abcde";
    int i;
    for ( i = strlen(str)-1; i >= 0 ; i--)
    {
        printf("%c ", str[i]);
    }
    return 0;
}