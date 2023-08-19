#include <stdio.h>
int main()
{
    int n = 3, i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("This is a not prime number");
            break;
        }
        else
        {
            printf("This is a prime number");
            break;
        }
    }
    return 0;
}