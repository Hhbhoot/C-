#include<stdio.h>
#include<conio.h>
void main()
{
   int i , j ;
   char ch =97;
   clrscr();
   i=1;
   do{
      j=1;
      do{
	   if(j%2==0){
		       printf("%c ",ch-32);
		       ch++;
		       j++;
		       }
		       else{
			     printf("%c ",ch);
			     ch++;
			     j++;
			     }
			     }
			     while(j<=i);
			     i++;
			     printf("\n");
			     }
			     while(i<=5);
			     getch();
			     }