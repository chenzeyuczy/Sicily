#include<stdio.h>
int main()
{
    int n,i,j,a[100],b[100]={0};
    while(scanf("%d",&n)!=EOF){
                               if(n==0)break;
                               for(i=0;i<n;i++){
                                                scanf("%d",&a[i]);
                                                b[i]=1;
                                                for(j=0;j<i;j++){if(b[j]==0)continue;
                                                                 if(a[i]==a[j])
                                                                 {b[i]=0;b[j]=0;}
                                                                 }
                                                }
                               for(i=0;i<n;i++){
                                                if(b[i]==1)
                                                printf("%d\n",a[i]);
                                                }
                               }
    system("pause");
    return 0;
}
