#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l,s2,s3,t=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int t1[a],t2[b],t3[c],t4[d];
    for(i=0;i<a;i++)scanf("%d",&t1[i]);
    for(i=0;i<b;i++)scanf("%d",&t2[i]);
    for(i=0;i<c;i++)scanf("%d",&t3[i]);
    for(i=0;i<d;i++)scanf("%d",&t4[i]);
    for(i=0;i<a;i++){
        if(t==1)break;
        for(j=0;j<b;j++){
            if(t==1)break;
            s2=t1[i]+t2[j];
            if(s2>20000||s2<-20000)continue;
            for(k=0;k<c;k++){
                if(t==1)break;
                s3=s2+t3[k];
                if(s3>10000||s3<-10000)continue;
                for(l=0;l<d;l++){
                    if(s3+t4[l]==0){
                        printf("%d %d %d %d\n",t1[i],t2[j],t3[k],t4[l]);
                        t=1;
                        break;
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}
