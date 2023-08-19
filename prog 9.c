// write a program to convert celcius tem into farenhiet
#include<stdio.h>
int tem(int c){
    int f;
    f=1.8*c+32;
    return f;
}
int main()
{
    int cel;
    printf("Enter the celcuis temperatue:\n");
    scanf("%d",&cel);
    printf("The farenheit tem of %d is %d\n",cel,tem(cel));
return 0;
}