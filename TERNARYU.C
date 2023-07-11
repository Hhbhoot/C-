 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     char ch;
     clrscr();
     printf("enter character");
     scanf("%c",&ch);
     ch>65 && ch<90? printf("%c",ch+32):printf("%c",ch-32);
     getch();
     }
