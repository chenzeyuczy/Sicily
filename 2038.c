#include<stdio.h>
#include<string.h>
int main()
{
    int i,m,j,l,p;
    char s[100];
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%s",&s);
        l=strlen(s);p=-1;
        for(j=0;j<l;j++){
            if(s[j]=='_'){
                p=j;
                break;
            }
        }
        if(p!=-1){
            for(j=p;j>0;j--)printf("%c",s[j-1]);
            printf("_");
        }
        for(j=l-1;j>p;j--)printf("%c",s[j]);
        printf("\n");
        for(j=0;j<l;j++)s[j]='\0';
    }
    system("pause");
    return 0;
}
