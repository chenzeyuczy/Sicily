#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,n,m;
    char s[200];
    while(scanf("%d",&n)){
        if(n==0)break;
        scanf("%s",s);
        l=strlen(s);
        m=l/n;
        char a[m][n];
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
                if(j%2==0)a[j][i]=s[j*n+i];
                else a[j][n-i-1]=s[j*n+i];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%c",a[j][i]);
            }
        }
        printf("\n");
        for(i=0;i<200;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
