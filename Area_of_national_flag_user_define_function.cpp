#include<stdio.h>
int triangle(int length)
{
	float area,weidth;
	weidth=length*6/10;
	area=weidth*length;
	return area;
}
int main()
{
	int l;
	float a;
	printf("Enter the length of the flag: ");
	scanf("%d",&l);
	a=triangle(l);
	printf("The area of the flag is:%.2f meter",a);
	return 0;
}
