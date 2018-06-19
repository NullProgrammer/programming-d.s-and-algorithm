 #include <stdio.h>

int main()
{
    int l,r,k,count=0;
    scanf("%d%d%d",&l,&r,&k);
    for(;l<=r;l++)
        if(l%k==0)
        count++;
        printf("%d",count);
    return 0;
}
