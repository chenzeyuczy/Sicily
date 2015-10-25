#include<stdio.h>
int main()
{
    int a,b,s1,s2,sum,p,i;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==-1&&b==-1)break;
        sum=a+b;
        if(a==0||b==0)p=1;
        else{
            s1=1;s2=1;
            for(i=(a+1);i<=(a+b);i++)s1*=i;
            for(i=2;i<=b;i++)s2*=i;
            p=s1/s2;
        }
        if(p==sum)printf("%d+%d=%d\n",a,b,sum);
        else printf("%d+%d!=%d\n",a,b,sum);
    }
    system("pause");
    return 0;
}
