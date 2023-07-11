#include<stdio.h>
void main()
{

 int i , j ,a[3][3],sum=0,sum1=0,sum2=0;

for(i=0;i<3;i++){
for(j=0;j<3;j++){

printf("enter value of a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
                   }
}

for(i=0;i<3;i++){
for(j=0;j<3;j++){

printf("%d ",a[i][j]);
                 }
for(j=0;j<3;j++){

 if(i==j){

   sum= sum+ a[i][j];
   
    }

 else if(i>j){
  sum1=sum1+a[i][j];
         }
  else {
   sum2=sum2+a[i][j];
               }
     
    
}

    printf("\n");
}
        printf("sum of diagonal element is :%d\n",sum);
        printf("sum of lower triangle is :%d\n",sum1);
        printf("sum of upper trisngle id :%d",sum2);
}

           