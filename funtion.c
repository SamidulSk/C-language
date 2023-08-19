//create a funtion which add two number
#include<stdio.h>
int sum(int a,int b);   //sum is function a and b as input and returns an integer as an output
int main()              //prototype declaration 
{
    int c;                  //function call
    c=sum(2,5);
    printf("The value of c is %d\n",c);
return 0;
}
int sum(int a,int b)
{
    int result;
    result=a+b;             //funtion defination
    return result;
}