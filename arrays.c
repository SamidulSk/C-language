#include<stdio.h>
int main()
{
    int marks[4];   //compailer vaiya allocate space for 4 integers
    printf("Enter the marks of 1st student\n");
    scanf("%d",&marks[0]);
    printf("Enter the marks of 2nd student\n");
    scanf("%d",&marks[1]);
    printf("Enter the marks of 3rd student\n");
    scanf("%d",&marks[2]);
    printf("Enter the marks of 4th student\n");
    scanf("%d",&marks[3]);
    printf("You have entered %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
return 0;
}