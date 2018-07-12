#include<stdio.h>
int main(){

// c program of triangle which is 90 degree rotated.

int i,j,rows, space;

    printf("Enter number of rows='n' to print (2n-1)rows to print 90 degree anticlockwise rotated triangle:\n");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(space =1; space<= rows-i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");

        }
        printf("\n");
    }

    for(i=rows; i>=1; i--)
    {
        for(space =rows; space >=i; space--)
        {
            printf(" ");
        }
        for(j=1; j<i; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;

}
