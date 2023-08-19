#include<stdio.h>
int main()
{
    //char str[]={'s','a','m','i','d','u','l','\0'};
    char str[]="samidul";
    char *ptr=str;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
return 0;
}