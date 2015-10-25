#include<stdio.h>
int main()
{
    int t,m,l;
    long n,i,j;
    scanf("%d",&m);
    for(l=0;l<m;l++){
        scanf("%ld",&n);
        for(i=2;i<=n;i++){
            t=0;
            for(j=2;j<i;j++){
                if(i%j==0){
                    t=1;
                    break;
                }
            }
            if(t==0&&n%i==0){
                printf("%ld ",i);
                n/=i; 
                i--;
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
