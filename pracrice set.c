// #include<stdio.h>
// int main()
// {
//     int i=30;
//     int *ptr=&i;
//     printf("The address of i is %u\n",&i);
//     printf("The value of i is %d\n",*ptr);
// return 0;
// }

#include <stdio.h>
void printadd(int a);
int main()
{
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printadd(i);
    printf("The address of variable i is %u\n", &i);
    return 0;
}
void printadd(int a)
{
    printf("The address of a is %u", &a);
}