// Take name and salary of two employee from user,write them to a text file like name1,3200...
#include <stdio.h>
int main()
{
    FILE *ptr;
    char s1[20];        //for taking name
    char s2[20];
    int sal1,sal2;
    printf("Enter the name of 1st employee\n");
    scanf("%s", s1);
    printf("Enter the salary of 1st employee\n");
    scanf("%d", &sal1);
    printf("Enter the name of 2nd employee\n");
    scanf("%s", s2);
    printf("Enter the salary of 2nd employee\n");
    scanf("%d",&sal2);
    ptr = fopen("employee.txt", "w");
    fprintf(ptr,"The name and salary is %s,%d\n",s1,sal1);
    fprintf(ptr,"The name and salary of 2nd employee is %s,%d\n",s2,sal2);
    return 0;
}