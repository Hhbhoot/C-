#include<stdio.h>
#include<conio.h>
void main()
{
    int i ,j;
    char ch=65;
    clrscr();
    i=1;
    while(i<=5)
    {
       j=1;
       while(j<=i){
		    if(i%2==0){
				printf("%c ",ch+32);
				ch++;
				j++;
				}
			else{
			      printf("%c ", ch);
			      ch++;
			      j++;
			      }
			      }
			      i++;
			      printf("\n");
			      }
			     getch();
			     }