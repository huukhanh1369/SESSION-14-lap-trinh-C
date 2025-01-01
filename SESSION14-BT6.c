#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "a1b2c3d4e5f6g7h8";
    int i, count =0;
    for ( i = 0; i< strlen(str); i++)
    {
        if(str[i]< '0' || str[i]> '9' )
            count++;
    }
    printf("\ntong so tu co trong chuoi la : %d", count);
    return 0;
}