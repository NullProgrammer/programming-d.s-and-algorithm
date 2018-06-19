 #include <stdio.h>

int main()
{
    int L,W,H,N,i;
    scanf("%d", &L);
    printf("\n");
    scanf("%d", &N);

   while(N)
   {    scanf("%d %d", &W,&H);

    if((W<L)||(H<L))
        printf("UPLOAD ANOTHER\n");
    
    else if((W>=L)&&(H>=L)&&(W==H))
        printf("ACCEPTED\n");

    else if((W>=L)&&(H>=L))
        printf("CROP IT\n");
   
       N--;
   }
    return 0;
}
