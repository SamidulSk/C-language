//factorial
#include<stdio.h>
int main()
{
    int i=0,n,factorial=1;
    printf("Enter the number\n");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        factorial =factorial*i;        // factorial*=i;
    }
    printf("The value of factorial is %d is %d",n,factorial);
return 0;
}