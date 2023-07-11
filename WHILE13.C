#include<stdio.h>
#include<conio.h>
void main()
{
     int i , j ,k=5;
     clrscr();
     i=1;
     while(i<=5){
	      j=1; k=5;
		 while(j<=i){
		      printf("%d ", k);
		      k--;
		      j++;
		      }
		      i++;
		      printf("\n");
		      }
		      getch();
		      }