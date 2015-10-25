#include<stdio.h>
int main()
{
    int i,j,t,m,n,s,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        s=0;
        for(j=0;j<n;j++){
            scanf("%d %d",&a,&b);
            if(s>m)continue;
            s+=a*b;
        }
        if(s>m)printf("Not enough\n");
        else{
            s=m-s;
            printf("%d\n",s);
        }
    }
    system("pause");
    return 0;
}
