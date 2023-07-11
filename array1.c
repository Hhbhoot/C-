#include<stdio.h>
void main()
{

  int i,j , a[5],b[5];
 
 for(i=0;i<5;i++){

  printf("Enter value of  a[%d]" ,i);

   scanf("%d",&a[i]);}
  
 for(  j=0 ; j<5 ; j++){
   
        

           printf("Enter value of b[%d]", j);
          scanf("%d", &b[j]);
    }
        
   for(i=0;i<5;i++){
      printf("a[%d] : %d\t" ,i , a[i]);
 
    printf("b[%d] : %d \t " , i ,b[i]);
  

  
 
  printf(" \t sum of a[%d] &b[%d] is %d  \n ",i,i, a[i]+b[i]);
 }
}
 
