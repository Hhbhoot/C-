#include<stdio.h>
void main()
{
  int i,j,sp=20 ;
i=1;
    do{
      j=1;
        do{
            printf("   ");
             j++;
             sp++;
            
                 }
               while(j<=sp);
              do{
                  
             printf(" *");
               j++;
                   } 
                 while(j<=i);
             
                i++;
                 printf("\n");
                       }
                  while(i<=5);
} 
                             