#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("This is an positive number");
    }
    if(a<0)
    {
        printf("This is an negetive number");
    }
    if(a==0)
    {
        printf("This is zero");
    }
return 0;
}