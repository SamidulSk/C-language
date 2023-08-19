#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 70)
    {
        printf("You are above 70 , you cannot drive\n");
    }
    else
        printf("You can drive\n");

    if (age = 50) // this is non zero true condition
        printf("half cehtury\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int age;
    int vip_pass=0;
    vip_pass=1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age <70 && age>=18 || vip_pass==1)
    {
        printf("You can drive\n");
    }
    else
        printf("you cannot drive\n");

    return 0;
}