#include<stdio.h>
int main()
{
    int i,j,t,n,m[3],p;
    long q;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<3;j++)m[j]=0;
        for(j=0;j<n;j++){
            scanf("%d %ld",&p,&q);
            if(q>m[p-1])m[p-1]=q;
        }
        for(j=0;j<3;j++){
            if(m[j]>0)printf("%d %ld\n",j+1,m[j]);
        }
    }
    system("pause");
    return 0;
}
