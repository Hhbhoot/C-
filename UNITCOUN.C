#include<stdio.h>
#include<conio.h>
void main()
{
   float unit ;  //
   clrscr();
   printf("Enter unit");
   scanf("%f",&unit);
   if(unit<100){
	     printf("your bill is %f",unit*0.6);

   }
   else if(unit>100 && unit<300)
       {
	printf("your bill is %f",unit*0.8);
	}
	else{
	      if(unit>300){
	       if()
	      printf("your bill is %f",unit*0.9);
	      }
	      else{
	      printf("ypur bill is 50");
	      }

	     }
	     getch();


}