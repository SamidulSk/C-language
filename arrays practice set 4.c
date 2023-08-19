//create an of size 3x10 contaning maltiplecation table of 2,7,9
#include<stdio.h>

int main()
{
    int multable[3][10];
    for(int i=1;i<=10;i++){
    multable[0][i]= 2*i;
    }
    for(int i=1;i<=10;i++){
        printf("2x%d = %d\n",i,multable[0][i]);
    }
    for(int i=1;i<=10;i++){
    multable[1][i]= 7*i;
    }
    for(int i=1;i<=10;i++){
        printf("7x%d = %d\n",i,multable[0][i]);
    }
    for(int i=1;i<=10;i++){
    multable[3][i]= 9*i;
    }
    for(int i=1;i<=10;i++){
        printf("9x%d = %d\n",i,multable[0][i]);
    }
return 0;
}