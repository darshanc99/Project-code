/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=0,r,rev=0,temp;
 clrscr();
 printf("Enter the numnber:");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
  r=n%10;
  n=n/10;
  rev=rev*10+r;			//Logic for reversing a number
 }
 printf("The reverse is %d",rev);
 if(rev==temp)
 {
  printf("\nTHE NUMBER IS PALINDROME");
 }
 else
 {
  printf("\nNOT A PALINDROME NUMBER");
 }
 getch();
}