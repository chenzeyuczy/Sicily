#include<stdio.h>
int main(){
    int n,m,i,t,a,b,max;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0&&m==0)break;
        int c[n];
        for(i=0;i<n;i++)c[i]=0;
        for(i=0;i<m;i++){
            scanf("%d %d",&a,&b);
            c[a]++;c[b]++;
        }
        max=0;
        for(i=0;i<n;i++){
            if(c[i]>max)max=c[i];
        }
        printf("%d\n",max);
    }
    system("pause");
    return 0;
}
