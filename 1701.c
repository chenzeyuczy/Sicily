#include<stdio.h>
int main()
{
    int i,j,n,t,s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=0;
        for(j=1;j<=n;j++)s+=(j*(j+1))/2;
        printf("%d: %d %d\n",i+1,n,s);
    }
    system("pause");
    return 0;
}
