//mul table
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to see table\n");
    scanf("%d",&n);
    printf("The mul table of %d is\n",n);
    for(int i=1;i<=10;i++){
       int mul=n*i;
        printf(" %d X %d = %d\n",n,i,mul);
    }
return 0;
}