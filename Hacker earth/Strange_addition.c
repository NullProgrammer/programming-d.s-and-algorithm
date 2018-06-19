 #include <stdio.h>
int main()
{
int t,m,n,a;

scanf("%d",&t);
for(int i=0;i<t;i++)
{
int rem,rem1,rem2,rev=0,rev2=0,rev1=0;

scanf("%d %d",&m,&n);
while(m!=0)
{
rem=m%10;
rev=rev*10+rem;
m=m/10;
}
while(n!=0)
{
rem1=n%10;
rev1=rev1*10+rem1;
n=n/10;
}
a=rev+rev1;
while(a!=0)
{
rem2=a%10;
rev2=rev2*10+rem2;
a=a/10;
}
printf("%d\n",rev2);
}
return 0;
}
