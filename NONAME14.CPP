/*
  By @dc250999
  star light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,temp,result=1;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
  r=n%10;
  n=n/10;
   while(r>0)
   {
    result=result*r;
     r--;
   }
  sum=sum+r;
 }
 if(sum==temp)
 {
  printf("\nThe number is KRISHNAMURTHY NUMBER");
 }
 else
 {
  printf("\nThe number is not KRISHNAMURTHY");
 }
 getch();
}
