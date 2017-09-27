#include<stdio.h>
int main()
{
 int n=2,m=0,sum=0;
  for(n=2;n<=50;n=n+4)
  {
    m=n*n;
    sum=sum+m;
  }
  printf("The summation is %d\n",sum);
  return 0;
}
