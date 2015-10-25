#include<stdio.h>
int main()
{
    int i,j,t,p,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        p=0;
        for(j=10+b;j<=100;j+=5){
            if(j%3==a&&j%7==c){
                printf("%d\n",j);
                p=1;
                break;
            }
        }
        if(p==0)printf("No answer\n");
    }
    system("pause");
    return 0;
}
