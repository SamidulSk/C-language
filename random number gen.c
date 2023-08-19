#include<stdio.h>
#include<stdio.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100+1;  //generate a random number between 1 to 100
    printf("The number is %d",number);
return 0;
}