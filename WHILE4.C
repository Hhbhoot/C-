#include<stdio.h>
#include<conio.h>
void main()
{
   char ch;      //print A to Z using while loop
   ch=65;
   clrscr();
   printf("Your output is ; ");
   while(ch<=90) {
		  printf("%c ",ch);
		  ch++;
		  }
		  getch();
		  }