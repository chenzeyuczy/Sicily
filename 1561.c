#include<stdio.h>
int main()
{
    long i,j,k,n,s,t=0,p;
    scanf("%d",&n);
    long a[n];
    a[0]=2;
    for(i=1;i<n;i++){
        for(j=a[i-1]+1;;j++){
            p=0;
            for(k=0;k<i;k++){
                if(j%a[k]==0){
                    p=1;
                    break;
                }
            }
            if(p==0){
                a[i]=j;
                break;
            }
        }
    }
    printf("%ld\n",a[n-1]);
    system("pause");
}
