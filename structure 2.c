#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code of 1st employee::\n");
    scanf("%d", &e1.code);
    printf("Enter the salary of 1st employee::\n");
    scanf("%f", &e1.salary);
    printf("Enter the name of 1st employee::\n");
    scanf("%s", e1.name);
    

    printf("Enter the code of 2nd employee::\n");
    scanf("%d", &e1.code);
    printf("Enter the salary of 2nd employee::\n");
    scanf("%f", &e1.salary);
    printf("Enter the name of 2nd employee::\n");
    scanf("%s", e1.name);


    printf("Enter the code of 3rd employee::\n");
    scanf("%d", &e1.code);
    printf("Enter the salary of 3rd employee::\n");
    scanf("%f", &e1.salary);
    printf("Enter the name of 3rd employee::\n");
    scanf("%s", e1.name);
    return 0;
}