#include<stdio.h>
int main()
{
    int i,n,k,s=0,t;
    scanf("%d",&n);
    long j[n],p[n];
    int q[n];
    double m[n];
    for(i=0;i<n;i++){
        scanf("%ld %ld",&j[i],&p[i]);
        m[i]=(double)j[i]/p[i];
        q[i]=i;
    }
    for(i=0;i<3;i++){
        for(k=i+1;k<n;k++){
            if(m[q[i]]<m[q[k]]){
                t=q[i];
                q[i]=q[k];
                q[k]=t;
            }
        }
        s+=p[q[i]];
    }
    printf("%d\n",s);
    for(i=0;i<3;i++)printf("%d\n",q[i]+1);
    system("pause");
    return 0;
}
