#include<stdio.h>
#include<conio.h>
void main()
{
 // print -n to n
 int n,i;
 clrscr();
 printf("enter n");
 scanf("%d",&n);
 printf("\n");
 for( i=-n;i<=n;i++)
 printf("%d\t",i);
 getch();
 }