#include<stdio.h>
#include<string.h>
void read();
void write();

struct bus1
{
    char date[10];
    char name[100];
    char time[10];
    int seat;
};
struct bus1 a[10000000];
int i,x=0,m,s,k=1;
int main()
{
    printf("how many seat you want:");
    scanf("%d",&s);
    k=k-s;
    write();
    printf("Enter 0 for giving info 1 for get info:");
    scanf("%d",&m);
read();
    if (m==0)
    {
    for(i=x;i<30-k;i++)
    {
        printf("Date(Format dd-mm-yyyy):");
        scanf("%s",a[i].date);
        printf("Name:");
        scanf("%s",a[i].name);
        printf("Time:");
        scanf("%s",a[i].time);
        printf("Seat Number:");
        scanf("%d",&a[i].seat);
        x=x+1;
        write();
    }
          i=x;
          write();
    }
    if(m==1)
    {
    read();
    for(i=0;i<=x;i++)
    {
        printf("\nDate:%s",a[i].date);
        printf("\nName:%s",a[i].name);
        printf("\ntime:%s",a[i].time);
        printf("\nseat:%d",a[i].seat);
    }
    return 0;
}
}

void read()
{
    FILE*bus;
    bus=fopen("bus1.txt","r");
    fread(&a,sizeof(a),1,bus);
    fclose(bus);

    FILE*count;
    count=fopen("counter.txt","r");
    fwrite(&x,sizeof(x),1,count);
    fclose(count);

    FILE*count1;
    count1=fopen("counter1.txt","r");
    fwrite(&k,sizeof(k),1,count1);
    fclose(count1);
}
void write()
{
    FILE*bus;
    bus=fopen("bus1.txt","w");
    fwrite(&a,sizeof(a),1,bus);
    fclose(bus);

    FILE*count;
    count=fopen("counter.txt","w");
    fwrite(&x,sizeof(x),1,count);
    fclose(count);

    FILE*count1;
    count1=fopen("counter1.txt","w");
    fwrite(&k,sizeof(k),1,count1);
    fclose(count1);
}
