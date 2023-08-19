#include<stdio.h>
int change(int a){
    a=a*10;
    return a;
}
int main()
{
    int i=5;
    printf("The value of i is %d\n",i);
    change(i);
    printf("The of i after change is %d",i);
    
return 0;
}