//sum of first 10 natural number
#include<stdio.h>
void main()
{
  int i=1, sum = 0;
  while(i<10)
  {
       sum = sum + i;
       i++;

  }
  printf("\nSum of first 10 Natural Numbers is : %d", sum);
}