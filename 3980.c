#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long n;
    int i,j,t,l;
    char s[31];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",s);
        l=strlen(s);
        n=0;
        for(j=0;j<l;j++){
            if(s[j]=='1')n+=pow(2,l-j-1);
        }
        printf("%ld\n",n);
    }
    system("pause");
    return 0;
}
