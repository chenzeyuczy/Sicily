#include<stdio.h>
int main()
{
    int n,r,c=1;
    double d,t,v,s,pi=3.1415927;
    while(scanf("%lf %d %lf",&d,&r,&t)!=EOF){
        if(r==0)break;
        s=pi*r*d/12/5280;
        v=s/t*3600;
        printf("Trip #%d: %.2lf %.2lf\n",c++,s,v);
    }
    system("pause");
    return 0;
}
