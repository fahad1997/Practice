#include<stdio.h>
int main()
{
    int a[10],n,i,j,c=1,swap;
    printf("Enter how many elements you want:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-c;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
        c++;
    }
    printf("Value is:");
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}
