//wap to print the adress of a variable. use this address to get the value of this variable
#include<stdio.h>
int main()
{
    int i=9;
    int *ptr;
    ptr=&i;
    printf("The address of i is %u\n",&i);
    printf("The value of i is %d",*(ptr));
return 0;
}