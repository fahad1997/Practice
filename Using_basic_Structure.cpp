#include<stdio.h>
#include<string.h>
int main()
{
	struct book
	{
		char name[20];
		float price;
		int pages;
	};
	struct book b[3];
	int i;
	float max_price;
	char temp_name[20];

	for (i=0;i<3;i++)
	{
		printf ("Enter Book Name:");
	    scanf (" %[^\n]s",b[i].name);
	    printf ("Enter Page:");
	    scanf (" %d",&b[i].pages);
	    printf ("Enter Price:");
	    scanf (" %f",&b[i].price);
	    printf ("\n");
}
max_price = b[0].price;
for (i=1;i<3;i++)
{
	if (b[i].price > max_price)
	{
		max_price = b[i].price;
		strcpy(temp_name,b[i].name);
	}
}
printf ("Highest Price book is : %s",temp_name);
return 0;
}
