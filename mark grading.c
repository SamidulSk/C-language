#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark\n");
    scanf("%d", &mark);
    switch (mark/10)
    {
        case 10:
        printf("Tu to bara heave driver hai vai");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("F");
        break;
    default:
        printf("chala ja bsdk");
        break;
    }
    return 0;
}