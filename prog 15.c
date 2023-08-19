//sum of even and odd numbers in a given range
#include<stdio.h>
int main()
{
    int range;
    int sum=0;
    printf("Enter the range you want to calculate sum\n");
    scanf("%d",&range);
    for(int i=0;i<range;i++){
            sum=sum+i;
    }
    printf("The sum is %d ",sum);
return 0;
}