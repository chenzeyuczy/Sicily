#include<stdio.h>
int main()
{
    long i,j,n,t=1,s=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        t*=i;
        t%=1000000;
        s+=t;
        s%=1000000;
    }
    printf("%ld\n",s);
    system("pause");
    return 0;
}
