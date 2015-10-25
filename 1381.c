#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,t,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char a[101],s[105];
        for(j=0;j<105;j++)s[j]=0;
        scanf("%s %d",a,&b);
        l=strlen(a);
        for(j=l;j>0;j--){
            s[l-j]+=b%10*(a[j-1]-'0');
            if(s[l-j]>9){
                s[l-j+1]+=s[l-j]/10;
                s[l-j]%=10;
            }
            s[l-j+1]+=b%100/10*(a[j-1]-'0');
            if(s[l-j+1]>9){
                s[l-j+2]+=s[l-j+1]/10;
                s[l-j+1]%=10;
            }
            s[l-j+2]+=b%1000/100*(a[j-1]-'0');
            if(s[l-j+2]>9){
                s[l-j+3]+=s[l-j+2]/10;
                s[l-j+2]%=10;
            }
            s[l-j+3]+=b%10000/1000*(a[j-1]-'0');
            if(s[l-j+3]>9){
                s[l-j+4]+=s[l-j+3]/10;
                s[l-j+3]%=10;
            }
            s[l-j+4]+=b/10000*(a[j-1]-'0');
            if(s[l-j+4]>9){
                s[l-j+5]+=s[l-j+4]/10;
                s[l-j+5]%=10;
            }
        }
        l=0;
        for(j=105;j>0;j--){
            if(s[j-1]>0){
                l=1;
                break;
            }
        }
        for(;j>0;j--)printf("%d",s[j-1]);
        if(l==0)printf("0");
        printf("\n");
    }
    system("pause");
    return 0;
}
