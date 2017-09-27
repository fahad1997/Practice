#include<stdio.h>
int main()
{
	int i,j,temp[3][3],ave,a[3],max,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("City %d Day %d: ",j+1,i+1);
			scanf("%d",&temp[i][j]);
		}
	}
	printf("\n");
	printf("Temperature matrix\n");

	k=0;
	ave=0;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			ave=ave+temp[i][j];
		}
		a[k]=ave/3;
		k++;
		ave=0;
	}

	printf("\t\tCity\n");
	printf("\tCity1\tCity2\tCity3\n");
	for(i=0;i<3;i++)
	{
		printf("\nDay1\t");
		for(j=0;j<3;j++)
		{
			printf("%d\t",temp[i][j]);
		}
	}
	printf("\nAverage\t");
    for(k=0;k<3;k++)
	{
		printf("%d\t",a[k]);
	}
	max=a[0];
	for(k=0;k<3;k++)
	{
		if(max<a[k])
		{
			max=a[k];
		}
	}
	printf("\nHighest Temperature %d",max);
	return 0;
}
