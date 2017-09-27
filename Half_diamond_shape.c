#include<windows.h>
int main()
{
	int rows,star,space;
	int n;
	printf ("Enter The Number Of Rows:");
	scanf ("%d",&n);
	for (rows=n;rows>=1;rows--)
	{
		for (space=n;space>=rows;space--)
		{
			printf (" ");
		}

		for (star=rows;star>=1;star--)
		{
			printf ("* ");
		}
	printf ("\n");
	}
return 0;
}
