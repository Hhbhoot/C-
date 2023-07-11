#include<stdio.h>
void main()
{
 int i ,a[10],sum=0,sum1=0;

for(i=0;i<10;i++){

printf("Enter element :");
scanf("%d",&a[i]);
                        }


for(i=0;i<10;i++){

if(a[i]%2==0){

 sum=sum+a[i];
               }
else{
 
 sum1=sum1 + a[i];
  
    }
}
 
 printf("sum of even element :%d\n",sum);
 printf("sum of odd element :%d\n",sum1);
 printf("sum of both element :%d",sum + sum1);

}