#include<stdio.h>
int main()
{
    int a[10],i,k=-1,n,m;
    printf("How many elements you want:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("which number you want to delete:");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            k=i;
            n--;
            break;
        }
    }

    if(k==-1)
    {
        printf("The data is not found...\n");

    }
    else
    {
        for(i=k;i<n;i++)
          {
            a[i]=a[i+1];
          }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
