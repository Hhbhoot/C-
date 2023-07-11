#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     clrscr();
     printf("enter your value");
     scanf("%d",&n);
     for(int i=1;i<=10;i++)
      { printf("%d * %d =%d\n",n,i,i*n);
      }

       getch();
       }