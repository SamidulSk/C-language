// write a programm to calculate the sum of the numbers occuring in the multiplication table of 8
#include <stdio.h>
int main()
{
    int i, sum = 0, b = 8;
    for (i = 1; i <=10; i++)
    {
        b = 8 * i;
        sum = sum+b;
    }
    printf("%d", sum);
    return 0;
}