 #include <stdio.h>
#include <string.h>
int main()
{
   char str[125];
   int i,len;
   int flag=0;
   scanf("%s", str);
   len=strlen(str);
   for(i=0;i<len;i++){
       if (str[i]!=str[len-(i+1)]){
           flag=1;
       }
   }
    if(flag){ 
           printf("NO");
            }   
     else{      
       printf("YES");
       }
    return 0;
}
