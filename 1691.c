#include<stdio.h>
int main()
{
    int i,j,k,t,x,y,s,max;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        for(j=x;j<=y;j++){
            s=0;
            for(k=1;k<=j;k++){
                if(j%k==0)s+=k;
            }
            s-=2*j;
            if(j==x)max=s;
            else if(s>max)max=s;
        }
        if(max>0)printf("%d\n",max);
        else printf("-1\n");
    }
    system("pause");
    return 0;
}
