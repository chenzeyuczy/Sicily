#include<stdio.h>
#include<string.h>
int main()
{
    long n,i;
    int j,l,d;
    int s[101];    
    while(scanf("%ld",&n)!=EOF){
        char a[n][101];
        for(i=0;i<101;i++)s[i]=0;
        for(i=0;i<n;i++){
            scanf("%s",a[i]);
            l=strlen(a[i]);
            for(j=l;j>0;j--){
                s[l-j]+=a[i][j-1]-'0';
                if(s[l-j]>9){
                    s[l-j]-=10;
                    s[l-j+1]++;
                }
            }
        }
        for(i=101,j=0;i>0;i--){
            if(s[i-1]>0){
                j=1;
                break;
            }
        }
        for(;i>0;i--)printf("%d",s[i-1]);
        if(j==0)printf("0");
        printf("\n");
    }
    system("pause");
    return 0;
}
