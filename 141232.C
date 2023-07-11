#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,nth=1;
    clrscr();
    printf("enter value of n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {

	 printf("%d ",i * nth);
	 nth *= 2;

	 }
	 getch();
	 }
