#include<stdio.h>
#include<conio.h>
void main()
{
   // print the A.P-1,3,5,7......upto n
   int n;
   clrscr();
   printf("Enter value of n ");
   scanf("%d",&n);
   printf("\n");
   for(int i=1;i<=2*n-1;i=i+2)
   printf("%d\t",i);
   getch();
   }