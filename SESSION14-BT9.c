#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello everyone i am a student";
    int i,j =0 ;
    char n;
    printf("nhap tu ban muon xoa : ");
    scanf("%c",&n );
    for ( i = 0; i< strlen(str); i++)
    {
        if (str[i] != n) 
        {  
            str[j] = str[i]; 
            j++;
        }
    }
    str[j] = '\0';
    printf("%s",str);
    return 0;
}