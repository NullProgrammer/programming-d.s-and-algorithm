#include<stdio.h>
int main(){

// program to print pascal's triangle.

int i,j,rows, space, num=1;

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    for(i=0; i<rows; i++)
    {
        for(space=1; space<=rows-i; space++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            if(i==0 || j==0)
                num =1;
            else
                num = num*(i-j+1)/j;

            printf("%4d", num);
        }
        printf("\n");
    }
        return 0;
}
