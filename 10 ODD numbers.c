#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        sum = sum + i;
        }
    }
       printf("\nThe sum of first 10 odd number is below:-");
        printf("%d", sum);
    
    return 0;
}