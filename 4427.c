#include<stdio.h>
int main()
{
    int t,a,b,l,h,i,p;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&l,&h);
        p=0;
        for(i=h;i>=l;i--){
            if(a%i==0&&b%i==0){
                p=1;
                break;
            }
        }
        if(p)printf("%d\n",i);
        else printf("No answer\n");
    }
    system("pause");
    return 0;
}
