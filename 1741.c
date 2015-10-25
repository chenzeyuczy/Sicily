#include<stdio.h>
int main()
{
    int i,j,t,n;
    float s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=0;
        int x[n],y[n];
        for(j=0;j<n;j++){
            scanf("%d %d",&x[j],&y[j]);
            if(j>0)s+=((float)y[j]+y[j-1])*(x[j]-x[j-1])/2;
        }
        printf("%.1f\n",s);
    }
    system("pause");
    return 0;
}
