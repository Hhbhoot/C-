#include<stdio.h>
#include<conio.h>
void main()
{
     int i ,j;
     char ch=65;
     clrscr();
     i=1;
     while(i<=5){
	j=1;
	  while(j<=i){
		      printf("%c ",ch);
		      ch++;
		      j++;
		      }
		      i++;
		      printf("\n");
		      }
		      getch();
		      }