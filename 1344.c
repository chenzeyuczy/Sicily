#include<stdio.h>
#include<math.h>
int main()
{
    int k,n,p,i,t;
    long s;
    while(scanf("%d %d",&k,&n)!=EOF){
        p=9;s=0;
        while(n>0){
            for(i=0;i<=p;i++){
                if(pow(2,i+1)>n){
                    s+=pow(k,i);
                    n-=pow(2,i);
                    p=i;
                    break;
                }
            }
        }
        printf("%ld\n",s);
    }
    system("pause");
    return 0;
}
