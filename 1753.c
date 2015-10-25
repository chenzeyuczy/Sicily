#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,c,d;
    char s[200];
    while(scanf("%s",s)){
        if(s[0]=='X'&&s[1]=='X'&&s[2]=='X')break;
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                if(s[i+1]>='a'&&s[i+1]<='z'||i+1==l){
                    printf("%c",s[i]);
                    d=0;
                }
                else {
                    if(s[i+2]>='a'&&s[i+2]<='z'||i+2==l){
                        c=s[i+1]-'0';
                        d=1;
                    }
                    else if(s[i+3]>='a'&&s[i+3]<='z'||i+3==l){
                        c=(s[i+1]-'0')*10+s[i+2]-'0';
                        d=2;
                    }
                    else if(s[i+4]>='a'&&s[i+4]<='z'||i+4==l){
                        c=(s[i+1]-'0')*100+(s[i+2]-'0')*10+s[i+3]-'0';
                        d=3;
                    }
                    else if(s[i+5]>='a'&&s[i+5]<='z'||i+5==l){
                        c=(s[i+1]-'0')*1000+(s[i+2]-'0')*100+(s[i+3]-'0')*10+s[i+4]-'0';
                        d=4;
                    }
                    else {
                        c=10000;
                        d=5;
                    }
                    for(j=0;j<c;j++)printf("%c",s[i]);
                }
                i+=d;
            }
        }
        printf("\n");
        for(i=0;i<200;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
