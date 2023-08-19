 #include <stdio.h>
int main()
{
    int term1 = 0, term2 = 1;
    int count, nextTerm;

    printf("Enter the number of terms:\n");
    scanf("%d", &count);
    printf("The First %d terms of Fibonacci series are :\n", count);
    for (int i = 0; i < count; i++)
    {
        if (i <= 1)
            nextTerm = i;
        else
        {
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }
        printf("%d\n", nextTerm);
    }
    return 0;
}