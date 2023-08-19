#include<stdio.h>
int main()
{
    int mul[10];
    int n;
    printf("Enter the number you want to see table\n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    mul[i]=n*i;
    }
    for(int i=1;i<=10;i++){
        printf("%dx%d = %d\n",n,i,mul[i]);
    }
return 0;
}