#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;
     scanf("%s",ch);

    for(i=0;ch[i]!=NULL;i++)
      {
       if(ch[i]>='A' && ch[i]<='Z')
       ch[i]=ch[i]+32;
       else if (ch[i]>='a' && ch[i]<='z')
       ch[i]=ch[i]-32;
      }
    printf("%s",ch);
    return 0;
} 
