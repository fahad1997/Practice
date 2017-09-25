#include<stdio.h>
int main()
{
    int m,n,i,j,k=0,a[100],b[100],c[200];
    //enter the elements of A
    printf("Enter how many elements you want for A:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Enter the values of B
    printf("Enter hew many elements you want for B:");
    scanf("%d",&m);
    printf("Enter the elements:");
    for(j=0;j<m;j++)
    {
       scanf("%d",&b[j]);
    }

    for(i=0;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(j=0;j<m;j++)
    {
        c[k]=b[j];
        k++;
    }

    printf("The total elements are:\t");
    for(k=0;k<m+n;k++)
    {
        printf("%d\t",c[k]);
    }
    return 0;
}
