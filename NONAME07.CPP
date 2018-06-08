/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14      //This is a method of defining constants
void main()
{
 float a,p,r;
 clrscr();
 printf("Enter the radius:");
 scanf("%f",&r);
 a=PI*r*r;
 p=2*PI*r;
 printf("The area is %0.2f",a);
 printf("\nThe perimeter is %0.2f",p);
 getch();
}
