#include<stdio.h>
int main()
{
   char name[11]="BANGLADESH";
   printf("BANGLADESH\n");
   int i;
   for(i=11;i>=0;i--)
   {
       printf("%c",name[i]);
   }
   return 0;
}
