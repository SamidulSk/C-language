#include<stdio.h>
void printarray(int *ptr, int n){
    for(int i=0;i<n;i++)
    {
    printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
}
int main()
{
    int arr[]={12,566,450,120,25,12,32};
    printarray(arr,7);
    
return 0;
}