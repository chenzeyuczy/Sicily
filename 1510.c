#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,i,l;
    char s[80];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d %s",&a,&s);
                     printf("%d ",i+1);
                     l=strlen(s);
                     for(b=0;b<l;b++){
                                       if(b==a-1)
                                       continue;
                                       printf("%c",s[b]);
                                       }
                     printf("\n");
                     }
    return 0;
}                                 
