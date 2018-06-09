/*
 By @dc250999
 OUTPUT:-
 2
 4 6
 8 10 12
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k=2;
 clrscr();
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d ",k);
   k=k+2;
  }
  printf("\n");
 }
 getch();
}