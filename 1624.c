#include<stdio.h>
#include<string.h>
int main(){
    int i,j,l,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char s[1000],c[27];
        scanf("\n");
        gets(s);
        scanf("%s",c);
        l=strlen(s);
        for(j=0;j<l;j++){
            if(s[j]==' ')continue;
            s[j]=c[s[j]-'A'];
        }
        printf("%d %s\n",i+1,s);
    }
    system("pause");
    return 0;
}
