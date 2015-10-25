#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,r,l,c[1000];
    char s[1000],b[1000];
    scanf("%d",&r);
    for(i=0;i<r;i++){
        scanf("%s",&s);
        l=strlen(s);
        n=0;
        for(j=0;j<l;j++)c[j]=0;
        for(j=0;j<l;j++){
            if(j==0){
                c[n]++;
                b[n]=s[j];
                continue;
            }
            if(s[j]==s[j-1])c[n]++;
            else {
                n++;
                c[n]++;
                b[n]=s[j];
            }
        }
        for(j=0;j<=n;j++)printf("%d%c",c[j],b[j]);
        printf("\n");
        for(j=0;j<1000;j++)s[j]='\0';
    }
    system("pause");
    return 0;
}
