/*
  By @dc250999
  The first light program :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,f=1;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);		//Taking the first input
 for(i=1;i<=n;i++)
 {
  f=f*i; 			//The factorial logic
 }
 printf("The factorial is %d",f);
 getch();
}