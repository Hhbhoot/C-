
#include<stdio.h>
#include<conio.h>
void main()
{
   int salary ;
   clrscr();
   printf("enter salary");
   scanf("%d",&salary);
   if(salary<2500)
   {
       printf("your tax is zero");
       }
       else if(salary>2500 && salary<5000)
       {  printf("your tax is %d",(salary-2500)*10;}
       else if(salary>5000 && salary<1000)
       { printf("your tax is %d",(2500*0.1)+(salary-5000)*0.2);}
       else
       { printf("your tax is %d",(2500*0.1)+(5000*0.2)+(salary-1000)*0.30);}
       getch();
       }