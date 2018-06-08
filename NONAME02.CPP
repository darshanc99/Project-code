/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the first number:");
 scanf("%d",&a);		//Accepting the first number
 printf("Enter the second number:");
 scanf("%d",&b);		//Accepting the second input
 a=a+b;
 b=a-b;
 a=a-b;
 printf("The swapped digits are:%d and %d",a,b);
 getch();
}