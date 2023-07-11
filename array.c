#include<stdio.h>
void main()
{

  int i,a[5];
 
 for(i=0;i<5;i++){

 printf("Enter value of a[%d] ", i);
 scanf("%d", &a[i]);
  }
   for(i=0;i<5;i++){

 printf("a[%d] = %d \n",i , a[i]);
  }
}