#include<stdio.h>
int main()
{
    int i,j,m=0,n=0,p,q,a[100],b[100];
    scanf("%d %d",&p,&q);
    for(i=1;i<=p;i++)
        {
        if((p%i)==0)a[m++]=i;
        }
    for(i=1;i<=q;i++)
        {
        if((q%i)==0)b[n++]=i;
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)printf("%d %d\n",a[i],b[j]);
        }
    system("pause");
    return 0;
}
    
