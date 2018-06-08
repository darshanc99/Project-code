/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 float c;
 char d;
 clrscr();
 printf("Enter the operator:");
 scanf("%c",&d);
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 if(d=='+')
 {
  c=a+b;
  printf("Sum is %0.2f",c);
 }
 else if(d=='-')
 {
  c=a-b;
  printf("Difference is %0.2f",c);
 }
 else if(d=='*')
 {
  c=a*b;
  printf("Product is %0.2f",c);
 }
 else
 {
  c=float(a)/float(b);
  printf("The division is %0.2f",c);
 }
 getch();
}                         \