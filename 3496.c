#include<stdio.h>
int main()
{
    int m,n,x,y;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m==0&&n==0)break;
        if(n%2!=0)printf("No answer\n");
        else{
            x=2*m-n/2;
            y=n/2-m;
            if(x>=0&&y>=0)printf("%d %d\n",x,y);
            else printf("No answer\n");
        }
    }
    system("pause");
    return 0;
}
