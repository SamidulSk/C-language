// #include<stdio.h>
// int main()
// {
//     int i =34;
//     int *ptr = &i;
//     printf("The value of ptr is %u\n",ptr);
//     ptr++;
//     ptr++;
//     ptr--;
//     printf("The value of ptr is %u\n",ptr);
// return 0;
// }
#include<stdio.h>
int main()
{
    int s,h;
    int *lol=&s;
    int *hol=&h;
    printf("The value of lol is %u\n",lol);
     lol=lol+5;
     printf("The value of lol is now %u\n",lol);
     lol=lol-3;
     printf("The value of lol is now %u\n",lol);
    printf("The value of hol is %d\n",hol);
    printf("Difference between lol and hol is %u\n",lol-hol);
    if(lol!=hol)
    {
        printf("samidul mr");
    }
    else
    {
        printf("sk");
    }
return 0;
}