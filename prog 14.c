// print odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d\t",i);
        }
    }
return 0;
}