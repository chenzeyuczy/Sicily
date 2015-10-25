#include<stdio.h>
int main()
{
    int i,t,j,k,n,c,tem,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        c=0;
        for(j=0;j<n;j++)scanf("%d",&a[j]);
        for(j=0;j<n;j++){
            tem=j;
            for(k=j+1;k<n;k++){
                if(a[tem]>a[k]){
                    tem=k;
                    c++;
                }
            }
            b=a[tem];
            a[tem]=a[j];
            a[j]=b;
        }
        printf("%d\n",c);
    }
    system("pause");
    return 0;
}
