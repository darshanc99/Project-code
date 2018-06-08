/*
  By @dc250999
  star light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,r;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum=sum+r;
  n=n/10;
 }
 printf("The sum of all digits is %d",sum);
 getch();
}