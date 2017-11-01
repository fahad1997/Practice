#include<stdio.h>
#include<windows.h>
int main()
{
    system("COLOR 3a");
    int a[10],n,i,search,minimum=0,mid;
    printf("How many elements you want:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    printf("Which element you want to search:");
    scanf("%d",&search);
    int maximum=n-1;

    mid=(minimum+maximum)/2;
    int location=-1;
    while(minimum<=maximum)
    {
       if(search==a[mid])
         {
            location=mid+1;
            printf("\n\nThe index number of searching number is %d",mid);
            break;
         }
       else
       {
         if(search>a[mid])
         {
             minimum=mid+1;
             mid=(minimum+maximum)/2;

         }
         else
         {
            maximum=mid-1;
            mid=(minimum+maximum)/2;

         }
       }
    }
    if(location=-1)
    {
       printf("\n\nThe number you have entered is not present....");
    }
     return 0;
}
