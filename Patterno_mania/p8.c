#include<stdio.h>
int main(){

   //pyramid using alphabets

int i,j;
char input, alphabet = 'A';

printf("Enter the character you want to print\N");
scanf("%c", &input);

for(i=0; i<(input-'A'+1); i++)
{
    for(j=0; j<=i; j++)
    {
        printf("%c", alphabet);
    }
            alphabet++;
    printf("\n");
}
return 0;
}
