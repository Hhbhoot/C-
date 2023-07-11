  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int n;
    clrscr();
    printf("enter of n ");
    scanf("%d",&n);
   for(int i=1;i<=10;i=i+1)
   {
    printf("%d * %d = %d\n",n,i,i*n);}

    getch();
    }
