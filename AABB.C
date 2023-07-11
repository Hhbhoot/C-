#include<stdio.h>
#include<conio.h>
void main()
{
  int ch;
  clrscr();
  for(ch=97;ch<=122;ch++)
  printf("%c %c\n",ch-32,ch);
  getch();
  }