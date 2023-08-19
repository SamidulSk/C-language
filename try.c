 #include<stdio.h>
 void sa(int a ,int b,int*sum,float*avg);
 int main()
 {
    int i=3;
    int j=16;
    int sum;
    float avg;
    sa(i,j,&sum,&avg);
    printf("The sum of is %d\n",sum);
    printf("The average is %f\n",avg);

 return 0;
 }
 void sa(int a,int b,int*sum,float*avg)
 {
    *sum=a+b;
    *avg=(float)*sum/2;
   
 }