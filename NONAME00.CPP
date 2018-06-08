/*
  By @dc250999
  Hello world program
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter the first number:");
 scanf("%d",&a);		//Accepting the first number
 printf("Enter the second number:");
 scanf("%d",&b);		//Accepting the second input
 c=a+b;				//Carrying out the addition
 printf("Addition is %d",c);
 getch();
}