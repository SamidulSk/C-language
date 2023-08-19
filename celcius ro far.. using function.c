//celcuis to farhrenheit using function
#include<stdio.h>
float temp( float c);
int main()
{
    float cel;
    printf("Enter the celcuis tem::");
    scanf("%f",&cel);
    printf("Faranheit temp is %f",temp(cel));
return 0;
}
float temp(float c)
{
    float result;
    result=(1.8*c)+32;
    return result;
}