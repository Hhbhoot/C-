#include<stdio.h>
#include<conio.h>
void main()
{
    int a , b , c;
    clrscr();
    printf("Enter A B C");
    scanf("%d %d %d",&a,&b,&c);
 //   a>b?(a>c? printf("A is largest"):printf("c is largest")):
   //		      (b>c?printf("B is largest"): printf("C is largest"));
     (a>b && a>c) ? printf("A is largest") :(b>c) ? printf("b is largest") : printf("c is largest");
    getch();
    }
