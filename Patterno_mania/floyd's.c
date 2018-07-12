#include<stdio.h>
int main(){

// program to print Floyd's triangle

int i, j, rows, k=1;

    printf("Enter number of rows, you want to print:\n");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", k);
            k++;
        }

        printf("\n");
    }
    return 0;
}
