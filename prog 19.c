// mul table
#include<stdio.h>
int main()
{
    int n,mul,i;
    printf("Enter the number which you want to see mul table");
    scanf("%d",&n);
    printf("The multiple table of %d is--",n);
    for(i=1;i<11;i++){
        mul=n*i;
    printf("\n%d * %d = %d\n",n,i,mul);
    }
return 0;
}