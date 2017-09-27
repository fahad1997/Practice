#include <stdio.h>
#include <string.h>

int main()
{
    struct std
{
	char name[20];
	char id[20];
	float cgpa;
};
struct std b[3];
	int i;
	float max=0;
	char tempname[20],tempid[20];
	for (i=0;i<3;i++)
	{
		printf ("Enter Name:");
		scanf (" %[^\n]s",b[i].name);
		printf ("Enter ID :");
		scanf (" %s",b[i].id);
		printf ("Enter CGPA : ");
		scanf ("%f",&b[i].cgpa);
	}
	max = b[0].cgpa;
	for (i=0;i<3;i++)
	{
		if (b[i].cgpa >= max)
		{
			max = b[i].cgpa;
			strcpy(tempid,b[i].id);
			strcpy(tempname,b[i].name);
		}
	}
	printf ("\n\nHighest C.G.P.A By: %s ID: %s",tempname,tempid);
	return 0;
}
