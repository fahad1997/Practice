#include<stdio.h>
#include<windows.h>
int main()
{

	int a[100],b[100],i,j,k,n,c[100],p;
	k=0,n=0;
	/*Values of set A*/
		system("COLOR 3f");
	printf("How many elements in set A:");
	scanf("%d",&n);
	printf("Enter the values of set A:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/*Values of set B*/
	n=0;
		printf("How many elements in set B:");
	scanf("%d",&n);
	printf("Enter the values of set B:");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j]){
			
			c[k]=b[j];
			k++;
			p=p+1;}
		}
	}
	printf("A intersection B=\t");
	for(k=0;k<p;k++)
	{
		printf("%d\t",c[k]);
	}
	return 0;
}
