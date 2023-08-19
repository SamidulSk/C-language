#include <stdio.h>
int main()
{
    float tax = 0, income;
    printf("Enter your income \n");
    scanf("%f",&income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net income tax to be paid  is %f\n", tax);
}