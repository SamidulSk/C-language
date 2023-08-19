#include<stdio.h>
int main()
{
    FILE*ptr;
    //fgetc for reading a file 
    // ptr= fopen("samidul.txt","r");
    //  printf("the value of my charecter is %c\n",fgetc(ptr));
    //  printf("the value of my charecter is %c\n",fgetc(ptr));
    //  printf("the value of my charecter is %c\n",fgetc(ptr));
    //  printf("the value of my charecter is %c\n",fgetc(ptr));
    ptr=fopen("samidul.txt","w");
    putc('c',ptr);
    fclose(ptr);
return 0;
}