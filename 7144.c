#include<stdio.h>
int main()
{
    int t,n,i,j,k,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        c=0;
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                for(k=j+1;k<n;k++){
                    if(a[i]+a[j]>a[k]&&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i])c++;
                }
            }
        }
        printf("%d\n",c);
    }
    system("pause");
    return 0;
}
