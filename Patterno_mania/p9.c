#include<stdio.h>
int main(){

    //program to print Full pyramid using *

    int i,j,rows,k=0;

    printf("Enter the number of rows to print * -\n");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++,k=0)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        while( k!= 2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}
