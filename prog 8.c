// wap to calculate sum of 10 natural number using do while loop
#include<stdio.h>
int main()
{
    int i=1, sum=0;
    do{
        sum=sum+i;
        i++;
    }
    while (i<10);
    printf("The sum of 10 natural number is %d\n",sum);
return 0;
}