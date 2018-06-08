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
 printf("Enter the year:");
 scanf("%d",&a);
 printf("Enter the month:");
 scanf("%d",&b);
 switch(b)
 {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:printf("There are 31 days in this month");
	break;
  case 4:
  case 6:
  case 9:
  case 11:printf("There are 30 days in this month");
	break;
  case 2:
	if(a%4==0||a%400==0&&a%100!=0)
	{
	 printf("There are 29 days in this month\nLEAP YEAR");
	}
	else
	{
	 printf("There are 28 days in this month\nNOT A LEAP YEAR");
	}
	break;
  default:printf("Wrong input");
 }
 getch();
}