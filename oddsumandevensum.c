#include<stdio.h>
void main()
{
 
int i , a[10] ,sum=0,sum1=0;

for(i=0;i<10;i++){

 printf("Enter values : ");
 scanf("%d",&a[i]);
                   }

 for(i=0;i<10;i++){

 if(i%2==0){
   sum = sum + a[i];
  
                   }
 }
  for(i=0;i<10;i++){
  if(i%2!=0){

  sum1=sum1 + a[i];
                   }

   
 }
 printf("sum of even position is %d\n", sum);
 printf("sum of odd  position is %d ",sum1);

}
