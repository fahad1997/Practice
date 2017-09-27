#include<stdio.h>
int main()
{
    int n,m,i,sum=0;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
       m=i*i*i;
       sum=sum+m;
    }
    printf("The summation is %d\n",sum);
    return 0;
}
