#include<stdio.h>
#include<string.h>
int main(){
    int i,l,c;
    char s[32];
    while(scanf("%s",s)!=EOF){
        if(s[0]=='#')break;
        c=0;
        l=strlen(s);
        for(i=0;i<l-1;i++)if(s[i]=='1')c++;
        if(s[i]=='e'&&c%2==0||s[i]=='o'&&c%2==1)s[i]='0';
        else s[i]='1';
        printf("%s\n",s);
        for(i=0;i<l;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
