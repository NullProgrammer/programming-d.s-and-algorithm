#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    long long int ans=1;
    int i;
    int arr;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr);
        ans=(ans*arr)% 1000000007;
    }
    printf("%d",ans);
    return 0;
}
