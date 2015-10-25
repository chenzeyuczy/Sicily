#include<stdio.h>
int main()
{
    struct{
        int a,b,c,v;
    }re[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%d %d %d",&re[i].a,&re[i].b,&re[i].c);
        re[i].v=re[i].a*re[i].b*re[i].c;
        printf("%d\n",re[i].v);
    }
    system("pause");
    return 0;
}
