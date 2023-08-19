#include <stdio.h>
int main()
{
    float height,weight;
    float area;
    printf("Enter weight of rec-trangle\n");
    scanf("%f", &weight);
    printf("Enter the height of rec-trangle\n");
    scanf("%f", &height);
    area = weight*height;
    printf("The area of rec-trangle is %f", area);
    return 0;
}