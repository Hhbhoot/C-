#include<stdio.h>
#include<conio.h>
void main()
{
 // enter n ,print even number upto n using Do  while loop
   int i=2 , n;
   clrscr();
   printf("Enter value of n ");
   scanf("%d",&n);
   printf("\n");
   i=2;
   do{
      if(i%2==0){
       printf("%d ",i);}

       i= i++;
       }
       while(i<=n);
       getch();
       }

