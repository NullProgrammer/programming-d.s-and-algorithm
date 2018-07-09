#include<stdio.h>
#include<conio.h>
void main()
{

//C program to print inverted pyramid using numbers

int i,j,rows;
clrscr();
printf("enter the number of rows");
scanf("%d", &rows);
for(i=1; i<=rows; i++)
{
for(j=rows; j>=i; j--)
{
printf(" %d", j);

}
printf("\n");
}
getch();
}