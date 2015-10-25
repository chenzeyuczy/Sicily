#include<stdio.h>
int main()
{
    int i,t,a,b,g,m,n;
    long l;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a>b){g=b;m=a;}
        else {g=a;m=b;}
        while((m%g)!=0){
            n=m%g;
            m=g;
            g=n;
            }
        l=(long)a*b/g;
        printf("%d %ld %d\n",i+1,l,g);
    }
    system("pause");
    return 0;
}
