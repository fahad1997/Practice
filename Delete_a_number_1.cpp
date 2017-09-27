#include<stdio.h>
int main()
{
	int a[100],i,n,m;
	printf("How many numbers:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Which number you want to delete:");
	scanf("%d",&m);
	printf("Resolved array:");
	for(i=0;i<n;i++)
	{
       if(a[i]==m)
       {
       	a[i]=a[i+1];
	   }
    }
    	for(i=0;i<n-1;i++)
      {
      	printf("%d\t",a[i]);
		  }
	return 0;
}
