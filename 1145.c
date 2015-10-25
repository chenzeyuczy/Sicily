#include<stdio.h>
int main()
{
    int l,m,i,j,a,b,c=0;
    scanf("%d %d",&l,&m);
    int s[l+1];
    for(i=0;i<=l;i++)s[i]=1;
    for(i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)s[j]=0;
    }
    for(i=0;i<=l;i++){
        if(s[i]==1)c++;
    }
    printf("%d\n",c);
    system("pause");
    return 0;
}
