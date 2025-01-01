#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("nhap vao chuoi ky tu : ");
    scanf("%s",  str);
    printf("%s\n",str); 
    printf("do dai cua chuoi ky tu vua nhap la : %d ",strlen(str));
    return 0;
}