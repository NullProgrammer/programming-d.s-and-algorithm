#include<stdio.h>
#include<conio.h>
void main()
{
//pyramid using alphabets

int i,j, rows;
char alphabet= 'A';
clrscr();
printf("enter the number of rows");
scanf("%d",&rows);
for(i=0; i<rows; i++)
{
for(j=0; j<=i; j++)
{
printf("%c", alphabet);
alphabet++;
}
printf("\n");
}
getch();
}

