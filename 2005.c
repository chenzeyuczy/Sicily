#include<stdio.h>
int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF){
        int a[n],c[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            c[i]=1;
            for(j=0;j<i;j++){
                if(a[j]==a[i]){
                    c[j]++;
                    i--;
                    n--;
                    break;
                }
            }
        }
        for(i=0;i<n;i++){
            if(c[i]%2==1){
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    system("pause");
    return 0;
}
