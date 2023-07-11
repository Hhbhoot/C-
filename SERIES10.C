#include<stdio.h>
#include<conio.h>
void main()
{
   // print 0.5,1,2.5,5,8.5,....upto n
   float i ,n ,j=0.5;
   clrscr();
   printf("enter value of n");
   scanf("%f",&n);
   printf("\n");
   for(i=0.5;i<=n;i++)
   {

       printf("%0.2f ", j);
       j = i+j ;
       }
       getch();
       }
