#include<stdio.h>
#include<conio.h>
void main()
{
     char ch;
     clrscr();
    printf("enter character ");
    scanf("%c",&ch);
    printf("\nAscii valyu is %d",ch);

    if(ch>65 && ch<90)
    {
      printf("your char is %c",ch+32);
    }
   else if(ch>97 && ch<122)
    {   printf("your char is %c",ch-32);
    }

    getch();
    }
