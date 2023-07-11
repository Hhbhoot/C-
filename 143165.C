#include<stdio.h>
#include<conio.h>
void main()
{
   // print 1 4 3 16 5...
   int i,n;
   clrscr();
   printf("enter value of n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     {  printf("%d ",i*i);}
     else{
      printf("%d ",i);
      } }
      getch();
      }





