#include<stdio.h>
float avg(int x,int y, int z);
int main()
{
        int a,b,c;
        printf("Enter the value of a \n");
        scanf("%d",&a);
        printf("Enter the value of b\n");
        scanf("%d",&b);
        printf("Enter the value of c\n ");
        scanf("%d",&c);
        printf("The average of %d,%d,%d, is %f",a,b,c,avg(a,b,c));

return 0;
}
float avg(int x,int y, int z)
{
    float result;
    result = (x+y+z)/3;
    return result;
}
