
#include<stdio.h>
int main()
{
	int array[100];
	int max,min,size,n;
	printf("Enter the size of array:");
	scanf("%d",&size),
	printf("Elements of Array:");
	for(n=0;n<size;n++)
	{
		scanf("%d",&array[n]);
	}
	max = array[0];
	min = array[0];
	for(n=0;n<size;n++)
	{
		if(array[n]>max)
		{max=array[n];
		}
		if(array[n]<min)
		{min=array[n];
		}
	}
	printf("Maximum Value is %d\n",max);
	printf("Minimum Value is %d",min);
	return 0;
}
