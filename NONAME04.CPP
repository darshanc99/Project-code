/*
  By @dc250999
  The first light :)
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,n,i;
 clrscr();
 printf("Enter the number of terms to be printed:");
 scanf("%d",&n);
 a=0;
 b=1;
 printf("The fibonacci series is:\n");
 for(i=1;i<=n;++i)
 {
  printf("%d ",a);
  c=a+b;
  a=b;
  b=c;
 }
 getch();
}
