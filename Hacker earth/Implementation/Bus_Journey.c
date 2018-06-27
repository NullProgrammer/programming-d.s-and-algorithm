 #include <stdio.h>

int main()
{
    long int N, M, count=0;
    scanf("%d%d", &N, &M);
    for(int i=0; i<(N-1); i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        M= M-a+b;
        
        if(M==0)
        count++;
        
    }
    printf("%d", count);
    return 0;
}
