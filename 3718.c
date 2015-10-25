#include<stdio.h>
int main()
{
    int i,j,n,m,c=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    float g[n];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(j==0)g[i]=a[i][j];
            else g[i]+=a[i][j];
        }
        g[i]/=(float)m;
        if(g[i]<60)c++;
    }
    for(i=0;i<n;i++)printf("%.2f\n",g[i]);
    printf("%d\n",c);
    system("pause");
    return 0;
}
