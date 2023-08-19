#include<stdio.h>
int main()
{
    int a,mul;
    printf("Enter the number which you want to see multable");
    scanf("%d",&a);
    printf("********************\n");
    printf("multable is:-\n");
    for(int i=1;i<11;i++){
       mul=a*i;
      printf("%d * %d=  %d\n",a,i,mul);
    }
return 0;
}