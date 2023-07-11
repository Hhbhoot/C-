#include<stdio.h>
#include<conio.h>
void main()
{
  int i , j ;
  clrscr();
  i=1;
  do{
	j=1;
	do{
	    printf("%d ",i);
	    j++;
	    }
	    while(j<=i);
	    i++;
	    printf("\n");
	    }
	    while(i<=5);
	    getch();
	    }