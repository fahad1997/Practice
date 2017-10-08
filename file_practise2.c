#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    system("COLOR 3f");
    int n;
    FILE *fptr;
    if(fptr=fopen("D:\\program.txt","r")==NULL)
    {
        printf("ERROR!opening file");
        exit (1);
       /*program exits if file pointer returns NULL.*/
    }
    fscanf(fptr,"%d",&n);
    printf("Value of n=%d",n);
    fclose(fptr);
    return 0;
}
