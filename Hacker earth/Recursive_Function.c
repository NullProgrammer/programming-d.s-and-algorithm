#include<stdio.h>

int f(int x, int y)
{
    if(x==0)
        return (y+1)%1000;
    else if (x>0 && y==0)
        return f(x-1,1)%1000;
    else
        return f(x-1, f(x, y-1));
        
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%03d", f(x,y));
    return 0;
}
