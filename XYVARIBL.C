#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y;
    clrscr();
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    if(x<2000 || x> 3000)
    { printf(" x=%d", x);
     } else{
	     printf("x does not satisfy condition");
	     printf("\n");
	     }
	 if(y>100 && y< 500){
		  printf("y=%d",y);
		  }
		  else{
		printf("y does not satisfy condition");
			}

    getch();
    }