#include<stdio.h>
int main()
{
    int n,i,j,a[100],t;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            for(j=0;j<i;j++){
                if(a[i]==a[j]){
                    n--;
                    i--;
                    break;
                }
            }
        }
        printf("%d\n",n);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
            }
            if(i>0)printf(" ");
            printf("%d",a[i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
