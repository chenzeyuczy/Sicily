#include<stdio.h>
int main()
{
    int i,n,j,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&k);
        int a;
        s=1-k;
        for(j=0;j<k;j++){
            scanf("%d",&a);
            s+=a;
        }
        printf("%d\n",s);
    }
    system("pause");
    return 0;
}
