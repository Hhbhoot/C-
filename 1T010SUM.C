#include<stdio.h>
#include<conio.h>
void main()
{
    int i,t=0;
    clrscr();
    printf("total of 1 to 10");
    printf("\n");
    for(i=1;i<=10;i++)
    {
	t +=i ;
	printf("%d ",i);
	}
	printf("\n");
	printf("the sum is %d",t);
	getch();
	}