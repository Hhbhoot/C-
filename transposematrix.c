#include<stdio.h>
void main()
{

 int i , j ,a[3][3];

 for(i=0;i<3;i++){
 
 for(j=0;j<3;j++){
 
 printf("Enter value of a[%d][%d]",i,j);
 scanf("%d",&a[i][j]);
                     }
 }

 for(i=0;i<3;i++){
 for(j=0;j<3;j++){
 
 printf("%d ",a[i][j]);
                  }

printf("\t");
for(j=0;j<3;j++){
 
 printf("%d ",a[j][i]);

                 }
printf("\n");
}

}
