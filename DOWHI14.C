#include<stdio.h>
#include<conio.h>
void main()
{
   int i , j;
   char ch=65;
   clrscr();
   i=1;
   do{
	j=1; ch=65;
	    do{
	       printf("%c ",ch);
	       ch++;
	       j++;
	       }
	       while(j<=i);
	       i++;
	       printf("\n");
	       }
	       while(i<=5);
	       getch();
	       }