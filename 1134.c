#include<stdio.h>
int main()
{
    int i,n,p;
    long s;
    while(scanf("%d %ld",&n,&s)!=EOF){
        if(n==0)break;
        long a[n],b[n];
        int t[n];
        p=1;
        for(i=0;i<n;i++){
            scanf("%ld %ld",&a[i],&b[i]);
            if(s>=b[i]){
                s+=a[i];
                t[i]=1;
            }
            else t[i]=0;
        }
        while(p==1){
            p=0;
            for(i=0;i<n;i++){
                if(t[i]==0){
                    if(s>=b[i]){
                        s+=a[i];
                        t[i]=1;
                        p=1;
                    }
                }
            }
        }
        p=0;
        for(i=0;i<n;i++){
            if(t[i]==0){
                p=1;
                break;
            }
        }
        if(p==1)printf("NO\n");
        else printf("YES\n");
    }
    system("pause");
    return 0;
}
