#include<stdio.h>
void main()
{
  
 int n;
 printf("Enter value of n");
 scanf("%d ",&n);
 //printf("\n");

 int nst=1;
 int nsp=n/2;
 int ml=n/2 +1;
 
 int i=1; 
 int sp=1;

 while(i<=n){
 
   
   int sp=1;
  while(sp<=nsp){

               printf("  ");
                 
                   sp++;
                         }
 
  int j=1;
          while(j<=nst){
                        

                      printf(" *");
                   j++;
}
                     
               if(i<ml){
                                  nst+=2;
                                  nsp--;}
                       else{
                                nst-=2;
                                 nsp++;
                             } 
                          
                    
     i++;
    printf("\n");
   }
}
 
 