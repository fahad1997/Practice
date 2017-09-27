#include<stdio.h>
int main()
{
    int i,a;
    printf("press -1 for continue loop or press other digit to exit:");
    scanf("%d",&i);
    while(i==-1)
    {
        printf("Enter positive number for checking whether the given number is even or odd:");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("%d is even\n",a);
        }
        else{
            printf("%d is odd",a);
        }
         printf("\npress -1 for continue loop or press other digit to exit:");
    scanf("%d",&i);
    }
    return 0;
}
