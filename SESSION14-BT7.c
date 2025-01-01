#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello my gmail is test123@gmail.com";
    int i, count = 0;  
    int size = strlen(str);

  
    count = 0; 
    for (i = 0; i < size; i++) 
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) 
        {
            count++;
        }
    }
    printf("\nSo ky tu la chu cai: %d", count);

   
    count = 0;  
    for (i = 0; i < size; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            count++;
        }
    }
    printf("\nSo ky tu la chu so: %d", count);
    
    
    count = 0;  
    for (i = 0; i < size; i++) 
    {
        if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96)) 
        {
            count++;
        }
    }
    printf("\nSo ky tu dac biet: %d", count);
    return 0;
}
