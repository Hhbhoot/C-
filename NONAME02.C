#include<stdio.h>
#include<conio.h>
void main()
{              // print A-a,B-b,C-c,...
     char ch;
     clrscr();
     ch=65;
     while(ch<=90){
	printf("%c -> %c ", ch , ch+32);
	ch++;
	}
	getch();
	}
