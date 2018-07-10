#include<stdio.h>
#include<conio.h>
void main()
{
  
  //Inverted pyramid with numbers
  
int i,j,rows;
clrscr();
printf("enter the number of rows");
scanf("%d", &rows);
for(i=rows; i>=1; i--)
{
for(j=1; j<=i; j++)
{
printf(" %d", i);

}
printf("\n");
}
getch();
}
