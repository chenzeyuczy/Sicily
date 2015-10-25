#include<stdio.h>
int main()
{
    int i,n,t,max;
    while(scanf("%d",&n)){
        if(n==0)break;
        max=0;
        for(i=0;i<n;i++){
            scanf("%d",&t);
            if(t>max)max=t;
        }
        printf("%d\n",max);
    }
    system("pause");
    return 0;
}
