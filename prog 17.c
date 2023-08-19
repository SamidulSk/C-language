//sum of even numbers from 1 to n 
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Even number between 0 to %d are\n ",n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum of all even numbers is %d\n",sum);

return 0;
}