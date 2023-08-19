//if a 4 digit number is input through user,wap to obtain the sum of the first and last digit of num.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter a four digit number : ");
	scanf("%d", &num);
	d=num%10;
	a=(num/1000)%10;
	printf("The sum of first and last digit is %d", a+d,num);
	getch();
	return 0;
}