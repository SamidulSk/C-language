#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee harry = {100,34.45,"sorry"};
    printf("Code is :%d\n",harry.code);
    printf("salary is :%f\n",harry.salary);
    printf("Name is :%s\n",harry.name);
    
return 0;
}