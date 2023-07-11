#include<stdio.h>
void main()
{
  int i,j,k,sp=15 ;
i=1;
    
    while(i<=5){
           k=1;
         while(k<=sp){
                       printf(" -  "); 
                        
                         sp--;
                           k++;
             }
                 j=1;
                 while(j<=i){
                              printf("* ");
                                j++;
                                     }
                     i++;
                     printf("\n");
                       }
}    