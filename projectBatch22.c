#include<stdio.h>
int main()
{
 int x,y,i,j,m,n,k=0,a[10],b[10],c[20],counter=0;
 //Enter the value of A
 printf("\nEnter how many elements you want:");
 scanf("%d",&n);
 printf("\nEnter the elements of A:");
 for(i=0;i<n;i++)
 {
          scanf("%d",&a[i]);

 }
 //Enter the value of B
 printf("\nEnter how many elements you want:");
 scanf("%d",&m);
 printf("\nEnter the elements of B:");
 for(j=0;j<m;j++)
 {
      scanf("%d",&b[j]);
 }
   i=0;
   j=0;
  while((i<n)&&(j<m))
  {
      if(a[i]<b[j])
      {
          c[k]=a[i];
          i=i+1;
      }
      else
      {
          c[k]=b[j];
          j++;
      }
      k++;
      //counter=counter+1;
  }
  if(i>n)
  {
      for(x=j;x<m;x++)
      {
          c[k]=b[x];
          k++;
          //counter=counter+1;
      }
  }
      else
      {
          for(y=i;y<n;y++)
          {
              c[k]=a[y];
              k++;
              //counter=counter+1;
          }
      }

   printf("The value of c:\t");
   for(k=0;k<m+n;k++)
   {
       printf("%d\t",c[k]);
   }
  return 0;
}
