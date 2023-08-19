#include<stdio.h>
int main()
{ 
    char ch;
    printf("Enter the charecter\n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97)          //ascii value a-z
    {
        printf("This is a lower case charecter");        
    }
    else
    {
        printf("This is not a lowet case latter");
    }
return 0;
}