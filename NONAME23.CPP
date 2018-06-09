/*
 By @dc250999
 OUTPUT:-
 1
 2 1
 3 2 1
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
  for(j=i;j>=1;j--)
  {
   printf("%d ",j);
  }
  printf("\n");
 }
 getch();
}