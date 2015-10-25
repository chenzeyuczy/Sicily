#include<stdio.h>
int main()
{
    int i,n;
    long max,t;
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        long a[n];
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
            if(i==0){
                max=a[i];
                continue;
            }
            if(a[i]>max)max=a[i];
        }
        printf("%ld\n",max);
    }
    system("pause");
    return 0;
}
