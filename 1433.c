#include<stdio.h>
int main()
{
    int a,i,j,t,n,min,max,d;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(j==0){
                min=a;
                max=a;
                continue;
            }
            if(a>max)max=a;
            if(a<min)min=a;
        }
        d=2*(max-min);
        printf("%d\n",d);
    }
    system("pause");
    return 0;
}
