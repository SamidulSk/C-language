#include<stdio.h>
int main()
{    
    int x,y,z;
    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the second number");
    scanf("%d",&y);
    printf("Enter the third number");
    scanf("%d",&z);
    if(x>y&& x>z){
        printf(" %d is greter",x);
    }
    else if (y>x&&y>z){
        printf("%d is greter",y);
    }
    else{
        printf("%d is greter ",z);
    }
return 0;
}