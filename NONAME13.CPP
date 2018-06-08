/*
  By @dc250999
  star light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,r,t=1,i;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
  if(n%i==0)
  {
   sum=sum+i;
   t=t*i;
  }
 }
 if(t==n&&sum==n)
 {
  printf("\nThe number is PERFECT");
 }
 else
 {
  printf("\nThe number is NOT PERFECT");
 }
 getch();
}