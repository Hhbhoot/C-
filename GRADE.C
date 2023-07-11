#include<stdio.h>
#include<conio.h>
void main()
{
    float maths,physics,chemistry, total,pr;
    clrscr();
    printf("enter marks of maths");
    scanf("%f",&maths);
    printf("\n enter marks of physics");
    scanf("%f",&physics);
    printf("\n enter marks of chemistry");
    scanf("%f",&chemistry);
    total= maths+chemistry+physics;
    printf("your total marks is %f",total);
    printf("\n your percentage is %f",(total*100)/300);

    pr=(total*100)/300;
    if(pr>=70){
	  printf("\nyou got A grade");}
	  else if(pr>=60 && pr<70){
	    printf("\n you got B grade");}
	    else if(pr>=40 && pr<60){
	       printf("\n you got C grade");}
	       else if(pr>=33 && pr<40){
		 printf("\n you got D grade");}
		 else{
		 printf("you are Fail");}


     getch();
     }