#include<stdio.h>
int main()
{
    struct record{
        int t,s,p;
    };
    int c,i,n,j,k,tem;
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%d",&n);
        int q[n];
        struct record a[n];
        for(j=0;j<n;j++){
            scanf("%d %d %d",&a[j].t,&a[j].s,&a[j].p);
            q[j]=j;
        }
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[q[j]].s<a[q[k]].s){
                    tem=q[j];q[j]=q[k];q[k]=tem;
                }
                else if(a[q[j]].s==a[q[k]].s){
                    if(a[q[j]].p>a[q[k]].p){
                        tem=q[j];q[j]=q[k];q[k]=tem;
                    }
                }
            }
            if(j>0)printf(" ");
            printf("%d",a[q[j]].t);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
