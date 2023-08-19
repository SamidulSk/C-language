//change value of main variable 10 times
#include<stdio.h>
int change(int*p){
        *p=10 * *p;
        return *p;
}
int main()
{
    int i=5;
    printf("The value of i is %d\n",i);
    change(&i);
    printf("The value of i after change is %d",i);
    
return 0;
}