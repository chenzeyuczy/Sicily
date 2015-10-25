#include<stdio.h>
int main()
{
    int i,j,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],b=1,c=0;
        for(j=0;j<n;j++)a[j]=1;
        while(b==1){
            b=0;
            for(j=0;j<n;j++){
                if(a[j]==1){
                    b=1;
                    if(c==0){
                        c=1;
                        a[j]=0;
                        printf("%d ",j+1);
                    }
                    else c=0;
                }
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
