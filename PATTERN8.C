#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   char ch=65;
   clrscr();
   for(i=1;i<=5;i++){
      for(n=1;n<=5;n++)
      {
	  printf("%c ",ch);
	  ch= ch+1;
	  }
	  printf("\n");

	  }
	  getch();
	  }