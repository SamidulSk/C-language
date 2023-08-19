// // // // #include<stdio.h>
// // // // #include<string.h>
// // // // int main()
// // // // {
// // // //     char *st="samidul";
// // // //     int a= strlen(st);
// // // //     printf("The length of string  is %d \n",a);
// // // // return 0;
// // // // }


#include<stdio.h>
#include<string.h>
int main()
{
    char *st="This";
    char st2[45];
    strcpy(st2,st);     //strcpy(target,source)
    printf("Now the st2 is %s",st2);
return 0;
}

// // #include<stdio.h>
// // #include<string.h>
// // int main()
// // {
// //     char st1[45]="Hello";
// //     char *st2 = "Harry";
// //     strcat(st1,st2);
// //     printf("Now the st1 is %s",st1);
// // return 0;
// // }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char st1[45]="Hello";   //according to value of first mismatch charecter
//     char *st2 = "Harry";
//     int val =strcmp(st1,st2);
//     printf("The val  is %d",val);
// return 0;
// }