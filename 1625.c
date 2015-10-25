#include<stdio.h>
int main()
{
    int h,m,s,t[3][6],i,j,k,n;
    char a[8];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
        h=10*(a[0]-'0')+a[1]-'0';
        m=10*(a[3]-'0')+a[4]-'0';
        s=10*(a[6]-'0')+a[7]-'0';
        for(j=0;j<6;j++){
            t[0][j]=h%2;h/=2;
            t[1][j]=m%2;m/=2;
            t[2][j]=s%2;s/=2;
        }
        printf("%d ",i+1);
        for(;j>0;j--){
            for(k=0;k<3;k++){
                printf("%d",t[k][j-1]);
            }
        }
        printf(" ");
        for(;j<3;j++){
            for(k=5;k>=0;k--){
                printf("%d",t[j][k]);
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
