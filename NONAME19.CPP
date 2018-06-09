/*
 By @dc250999
 OUTPUT:-
 1
 12
 123
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
 clrscr();
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d ",j);
  }
  printf("\n");
 }
 getch();
}