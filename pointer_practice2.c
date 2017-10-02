#include<stdio.h>
int main()
{
   int i=3,*j,**k;
   j=&i;
   k=&j;
   printf("\nAdress of i=%u",&i);
   printf("\nAdress of i=%u",j);
   printf("\nAdress of j=%u",&j);
   printf("\nAdress of j=%u",k);
   printf("\nAdress of k=%u",&k);
   printf("\nvalue of j=%u",j);
    printf("\nvalue of k=%u",k);
     printf("\nvalue of i=%d",i);
      printf("\nvalue of i=%d",*(&i));
       printf("\nvalue of i=%d",*j);
        printf("\nvalue of i=%d",**k);
        return 0;
}
