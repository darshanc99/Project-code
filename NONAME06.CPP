/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,flag=0;
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
  printf("The number is even");
 }
 else
 {
  printf("The number is odd");
 }
 getch();
}