#include <stdio.h>
int main()
{
    int a[7000],i;
    for(i=0;i<7000;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==42)
    {
        break;
    }
    printf("%d\n",a[i]);
    }
    return 0;
}
