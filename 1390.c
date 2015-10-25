#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,j,l,d,t;
    char s[80];
    while(scanf("%s",s)!=EOF){
        if(s[0]=='*')break;
        l=strlen(s);
        t=0;
        char c[l-1][2];
        for(i=1;i<l-1;i++){
            if(t==1)break;
            for(k=0;k+i<l;k++){
                if(t==1)break;
                c[k][0]=s[k];
                c[k][1]=s[k+i];
                for(j=0;j<k;j++){
                    if(c[j][0]==c[k][0]&&c[j][1]==c[k][1]){
                        t=1;
                        break;
                    }
                }
            }
        }
        if(t==0)printf("%s is surprising.\n",s);
        else printf("%s is NOT surprising.\n",s);
        for(i=0;i<80;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
