#include<stdio.h>
int main()
{
    int n,m,i,s;
    while(scanf("%d %d",&n,&m)){
        if(n==0&&m==0)break;
        s=1;
        for(i=n;i>m;i--)s*=i;
        for(i=2;i<=(n-m);i++)s/=i;
        printf("%d\n",s);
    }
    system("pause");
    return 0;
}
