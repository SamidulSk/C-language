#include<stdio.h>
#include<string.h>
int main()
{
 char u[200]="samidul@gmail.com",p[200]="7872";
 char u1[200],p1[200];
 printf("Enter username\n");
 scanf("%s",&u1);
 printf("Enter password\n");
 scanf("%s",&p1);
 if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
 {
 	printf("Login Successful");
 }
 else
 {
 	printf("Wrong username or password");
 }
 	
}