#include <stdio.h>

int main()
{
    int i,n,t,j;
    long int k,min,a[100000];
    scanf("%d\n",&t);
    for(j=0;j<t;j++)
    {
    scanf("%d %ld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%ld ",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<=min)
        min=a[i];
    }
    if(min>=k)
    printf("0\n");
    else
    printf("%ld\n",k-min);
    return 0;
}}
