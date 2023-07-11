#include<stdio.h>
#include<conio.h>
void main()
{
    int i , n , sum=0;
    clrscr();
    printf("enter value of n");
    scanf("%d",&n);
    printf("\n");
    i=2;
    while(i<=n){
       sum= sum+i;
       printf("%d ",i);
       i=i+2;
       }
       printf("\ntotal is %d " , sum);
       getch();
       }