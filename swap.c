//swapping of two number using third variable 
#include<stdio.h>
int main()
{
    int c;
    int a=10;
    int b=20;
    printf("Before swapping a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d and b=%d",a,b);
return 0;
}