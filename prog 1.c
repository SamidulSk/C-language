// evaluate this equation T=2*a+(b)^0.5+9c
#include <stdio.h>
#include <math.h>
int main()
{ 
    float T;
    int a = 5;
    int b = 9;
    int c = 12;
    T = 2 * a + pow(b, 0.5) + 9 * c;
    printf("The value of T is %f\n", T);
    return 0;
}