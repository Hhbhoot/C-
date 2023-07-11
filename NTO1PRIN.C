#include<stdio.h>
#include<conio.h>
void main()
{
   int n, i;
   clrscr();
   printf("Enter value of n");
   scanf("%d",&n);
   printf("\n");
   for(i=n;i>=1;i--)
   printf("%d\n",i);
   getch();
   }