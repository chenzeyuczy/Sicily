#include<stdio.h>
#include<math.h>
int main()
{
    long n,i,j,c,l,p1,p2;
    long p[100000];
    p[0]=2;p[1]=3;
    for(i=5,c=2;i<1299710;i+=2){
        l=0;
        for(j=1;i>=p[j]*p[j];j++){
            if(i%p[j]==0){
                l=1;
                break;
            }
        }
        if(l==0)p[c++]=i;
    }
    while(scanf("%ld",&n)!=EOF){
        if(n==0)break;
        l=0;
        for(i=0;i<100000;i++){
            if(n==p[i]){
                l=0;
                break;
            }
            else if(n>p[i])p1=p[i];
            else {
                p2=p[i];
                l=p2-p1;
                break;
            }
        }
        printf("%ld\n",l);
    }
    system("pause");
    return 0;
}
