#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the four number");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greter", a);
    }
    else if (b > c && b > d && b> a)
    {
        printf(" %d is greter", b);
    }
    else if(c > a && c > b && c > d)
    {
        printf(" %d is greter", c);
    }
    else
    {
        printf("%d is greter ",d);
    }
    return 0;
}