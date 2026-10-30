#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j,k,N;
      clrscr();
      printf("\n Enter value of N:");
      scanf("%d", &N);
      for(i=1;i<=N;i++) //for line printing
     {
     for(k=1;k<=N;k++) // space printing

     {
	printf(" ");
     }
      for(j=1;j<=i;j++) //character printing
      {
      printf("*");
      }
      printf("\n");
   }
   getch();
}
