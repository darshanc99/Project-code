/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c;
 char d;
 clrscr();
 printf("Enter the first number:");
 scanf("%f",&a);
 printf("Enter the second number:");
 scanf("%f",&b);
 printf("Enter the operation:");
 scanf(" %c",&d);
 switch(d)
 {
  case '+':c=a+b;
	printf("The sum is %0.2f",c);
	break;
  case '-':c=a-b;
	printf("The difference is %0.2f",c);
	break;
  case '*':c=a*b;
	printf("The product is %0.2f",c);
	break;
  case '/':c=a/b;
	printf("The division is %0.2f",c);
	break;
  default:printf("Wrong operation");
 }
 getch();
}