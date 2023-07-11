#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   clrscr();
   printf("enter your Age");
   scanf("%d",&age);
   if(age>18)
	  {
	   printf("Eligible for voting");
	   }
	   else{
	       printf("not eligible for voting");
	       }
	       getch();
	       }