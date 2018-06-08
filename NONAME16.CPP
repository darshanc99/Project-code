/*
  By @dc250999
  star light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,flag=0,i;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   flag=1;
   break;
  }
  else
  {
   flag=0;
  }
 }
 if(flag==1)
 {
  printf("\nNot a prime number");
 }
 if(flag==0)
 {
  printf("\nPrime number");
 }
 getch();
}