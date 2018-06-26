#include<stdio.h>
 
int main(){
    int T,N, a[1000000],b[1000000];
    scanf("%d", &T);
    while(T--)
    {
        long long int i, sum1= 0, sum2= 0;

        scanf("%d", &N);
        for(i=0; i<N; i++)
        {
            scanf("%d", &a[i]);
            sum1 = sum1 + a[i];
        }
        for(i=0; i<N; i++)
        {
            scanf("%d", &b[i]);
            sum2 = sum2 + b[i];
            
        }
        if(sum1 == sum2)
        printf("YES");
        else
        printf("NO");
        
        printf("\n");
    }
    
 }
