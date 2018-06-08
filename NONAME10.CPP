/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=0;
 clrscr();
 printf("Enter the numnber:");
 scanf("%d",&n);
 while(n>0)
 {
  n=n/10;
  i++;
 }
 printf("There are %d digits",i);
 getch();
}