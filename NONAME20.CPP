/*
 By @dc250999
 OUTPUT:-
 1
 23
 456
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k=1;
 clrscr();
 printf("Enter the number of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d ",k);
   k++;
  }
  printf("\n");
 }
 getch();
}