/*
  By @dc250999
  star light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,temp;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
  r=n%10;
  n=n/10;
  sum=sum+r*r*r;
 }
 if(sum==temp)
 {
  printf("\nThe number is ARMSTRONG NUMBER");
 }
 else
 {
  printf("\nThe number is not ARMSTRONG");
 }
 getch();
}