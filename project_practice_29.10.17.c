#include<stdio.h>
#include<string.h>
void read();
void write();
void data();
void view();

struct data
{
    char name[100];
    char mobile[100];
    char address[20];
};
struct data a[10];
int i=0,n,option;

int main()
{
     printf("Press 0 to write and 1 to read information.");
    printf("\nEnter your option:");
    scanf("%d",&option);
    if(option==0)
     {
       data();
     }
    if(option==1)
     {
       view();
     }
  return 0;
}

void data()
{
      printf("How many People:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
       {
          printf("Name:");
          scanf("%s",a[i].name);
          printf("Mobile Number:");
          scanf("%d",a[i].mobile);
          printf("Address:");
          scanf("%s",a[i].address);
          write();
       }
}

void view()
{
       read();
       for(i=0;i<n;i++)
        {
          printf("Name:%s\n",a[i].name);
          printf("Mobile:%s\n",a[i].mobile);
          printf("Address:%s\n\n",a[i].address);
        }
}

void read()
{
    FILE * pc;
    pc=fopen("project_practice.txt","r");
    fread(&pc,sizeof(a),1,pc);
    fclose(pc);
}

void write()
  {
    FILE * pc;
    pc=fopen("project_practice.txt","w");
    fwrite(&pc,sizeof(a),1,pc);
    fclose(pc);
  }
