#include<stdio.h>
#include<conio.h>
void main()
{

      int i,x,sum=0;
      clrscr();

      for(i=1; i<10; i++);

      {    printf("/n Enter number; %d",i);
	   scanf("%d",&x);
	   sum=sum+x;

      }
      printf("/n Sum of all numbers: %d", sum);
      getch();

}