#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "abcdeedcba";
    int i, count =0;
    char n;
    printf("nhap vao ky tu ban muon tim : ");
    scanf("%c",&n);
    for ( i = 0; i< strlen(str); i++)
    {
        if(str[i] == n);
            count++;
    }
    printf("\ntong so lan ky tu '%c' xuat hien trong day ky tu cho san la : %d", n, count);
    return 0;
}