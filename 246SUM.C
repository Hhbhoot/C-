#include<stdio.h>
#include<conio.h>
void main()
{
   // print total of 2,4,6,...upto n
   int i, n, t=0;
   clrscr();

     printf("enter value of n");
     scanf("%d",&n);
     printf("\n");
     for(i=2;i<=n;i=i+2)
     {
       printf("%d ", i );
	    t += i;
	     }
	printf("\nsum is %d", t );
	getch();
	}








