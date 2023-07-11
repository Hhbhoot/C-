#include<stdio.h>
#include<conio.h>
void main()
{
   // print even number
   int i,n;
   clrscr();
   printf("enter n");
   scanf("%d",&n);
   printf("\n");
   for(i=2;i<=n;i=i+2)
   printf("%d\n",i);
   getch();
   }