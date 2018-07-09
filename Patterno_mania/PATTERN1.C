#include<stdio.h>
#include<conio.h>
void main()
{
//c program for printing inverted pyramid using *

int i, j, rows;
clrscr();
printf("enter the number of rows");
scanf("%d", &rows);
for(i=0; i<rows; i++)
{
for(j=rows; j>i; j--)
{
printf(" * ");
}
printf("\n");
}
getch();
}
