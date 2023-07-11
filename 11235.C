#include<stdio.h>
#include<conio.h>
void main()
{
    //0 1 1 2 3 5 8..
    int i, n,t1,t2,t3;
    t1=-1,t2=1;
    t3=t1+t2;
    clrscr();
    printf("enter value of n");
    scanf("%d",&n);
    printf("\n");
   // printf("1 ");

 //   prinf("")
    for(i=1;i<=n-1;i++)
    {
      printf("%d ",t3);

      t1=t2;
      t2=t3;
      t3=t1+t2;

      }
      getch();
      }







