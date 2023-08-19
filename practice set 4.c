// write a programm to print multiplication table of a given number
// #include <stdio.h>
// int main() {
//   int n, i;
//   printf("Enter an integer: ");
//   scanf("%d", &n);
//   for (i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n", n, i, n * i);
//   }
//   return 0;
// }


//write a programm to find multiplecation table in reverse order
#include<stdio.h>
int main()
{
    int i,n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for (i=10;i;--i) 
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }
return 0;
}