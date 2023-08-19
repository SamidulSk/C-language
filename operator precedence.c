#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    printf("The value of 3*x- 8*y is %d\n", 3 * x - 8 * y); // konsa operator pehla ayega //* ,/ ,% ,   + ,-  =

    printf("The value of 8*y/3*x is %d\n", 8 * y / 3 * x); // wrong answer according to me

    // LEFT TO RIGHT ASSOCIATIVITY
    // 8*3=24/3
    //  =8*2
    // =16
}
