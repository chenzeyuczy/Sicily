#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,l;
    char s[40],t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        l=strlen(s);
        if(s[0]!='a'&&s[0]!='e'&&s[0]!='i'&&s[0]!='o'&&s[0]!='u'){
            for(j=1;j<l;j++)printf("%c",s[j]);
            printf("%cow\n",s[0]);
        }
        else printf("%scow\n",s);
        for(j=0;j<l+1;j++)s[j]='\0';
    }
    system("pause");
    return 0;
}
