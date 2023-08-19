#include<stdio.h>
int sum(int n);
int main()
{
    int a;
    printf("Enter the number you want to see sum\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    printf("The sum of first %d natural number is %d",a,sum(a));

    
return 0;
}
int sum(int n)
{
    int r;
    r=sum(n-1)+n;
    return r;
}