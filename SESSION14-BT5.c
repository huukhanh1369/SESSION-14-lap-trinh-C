#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello everyone, i am a student";
    int i, count =1;
    char n = ' ';
    for ( i = 0; i< strlen(str); i++)
    {
        if(str[i] == n)
            count++;
    }
    printf("\ntong so tu co trong chuoi la : %d", count);
    return 0;
}