#include<stdio.h>
void main()
{

 int i , m[5],s[5],e[5],t[5];float pr[5];

 printf("maths science english \n");

 for(i=0;i<5;i++){

 
 
  scanf("%d",&m[i]);
  scanf("%d", &s[i]);
  scanf("%d",&e[i]);
  }

   printf("\n");
   printf("maths\tscience\tenglish\ttotal\t pr\tgrade \n");
  
  for(i=0;i<5;i++){

  t[i] = m[i]+s[i]+ e[i];
  pr[i]= (t[i]*100)/300 ;


  printf("%d \t %d \t %d  ", m[i], s[i],e[i]);
  printf(" \t %d ",t[i]);
  printf("\t%0.2f ",pr[i]);
 

  if(pr[i]>75){
    
               printf("\tA \n");
 }
                    
  else if(pr[i]>=40 && pr[i]<=75){
               
              printf("\tB\n");
 }
  else{
              printf("\tFAIL \n");
        }
     }
 } 













    