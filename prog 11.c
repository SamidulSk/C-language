// wap to using function which calculate the sum and average of two numbers.use pointer and print the value of sum and avg in main().
#include <stdio.h>
void sumavg(int a, int b, int * sum, float * avg)
{
    * sum = a + b;
    * avg =(float) *sum/2;
}
int main()
{
    int i, j;
    int sum;
    float avg;
    i = 3;
    j = 8;
    sumavg(i, j, &sum, &avg);
    printf("the value of sum is %d \n",sum);
    printf("The value of avg is %f \n",avg);
    return 0;
}