#include<stdio.h>
#include<conio.h>
void main()
{
  // print sum of odd 1,3,5,
    int i,n,t=0;
    clrscr();
    printf("enter value of n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i=i+2)
    {  printf("%d ",i);
    t += i ;
    }
    printf("\nsum is %d", t);
    getch();
    }