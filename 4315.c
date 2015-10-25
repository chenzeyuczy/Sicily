#include<stdio.h>
int main()
{
    int i,j,t,n,c[10];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<10;j++)c[j]=0;
        for(j=1;j<=n;j++){
            if(j==1000)c[1]++;
            if(j>=100)c[j%1000/100]++;
            if(j>=10)c[j%100/10]++;
            c[j%10]++;
        }
        for(j=0;j<10;j++){
            if(j>0)printf(" ");
            printf("%d",c[j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
