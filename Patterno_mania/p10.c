#include<stdio.h>
int main(){

    // print inverted Full pyramid using *

int i,j,rows,k=0;
    printf("Enter number of rows to print inverted full pyramid");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--, k=0)
    {
        for(j=rows; j>i; j--)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
}
