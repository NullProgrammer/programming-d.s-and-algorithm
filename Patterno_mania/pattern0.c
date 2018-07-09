#include<stdio.h>
#include<conio.h>
void main()
{

//c program to print half pyramid using *

int i, j, rows;
clrscr();
printf("Enter the number of rows");
scanf("%d", &rows);

for(i=0; i<rows; i++)
{
    for(j=0;j<=i; j++)
    {
	printf(" * ");
	}
    printf("\n");
}
getch();
}
