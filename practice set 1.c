//area of rec-trangle
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of length\n");
    scanf("%d",&a);
    printf("Enter the value of width\n");
    scanf("%d",&b);
    printf("The area of rec-trangle is--%d",a*b);
}


#include<stdio.h>
int main()
{
    int radius;
    float pi=3.154;
    int height;
    printf("what is the radius of cicle ");
    scanf(" %d",&radius);
    printf("The area of circle is  :   %f\n",pi*radius*radius);//   area of circle
    printf("enter the height of cylinder");
    scanf("%d",&height);
    printf("volume of cylinder is %f",pi*radius*height);  //volune of cylinder
return 0;
}
#include<stdio.h>
int main()
{
    float celsius;
    printf("Enter the celsius tempureture");
    scanf("%f",&celsius);
    printf("THIS TEMPERATURE IN FAHRENHEIT I:: %f",9*celsius/5+32);
    
return 0;
}
#include<stdio.h>
int main()
{
    int p=5000;
    float r=7.5;
    int t=10;
    printf("The simple interest is:: %f",p*r*t/100);
return 0;
}