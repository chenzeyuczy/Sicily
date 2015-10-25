#include<stdio.h>
int main()
{
    int i,j,t,n,x,y,d,s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        s=0;
        for(j=0;j<n;j++){
            scanf("%d %d",&x,&y);
            if(x>10&&x<50){
                d=(x-30)*(x-30)+(y-30)*(y-30);
                if(d<400)s+=1;
            }
            else if(x>90&&x<110){
                d=(x-100)*(x-100)+(y-30)*(y-30);
                if(d<100)s+=2;
            }
            else if(x>165&&x<175){
                d=(x-170)*(x-170)+(y-30)*(y-30);
                if(d<25)s+=3;
            }
        }
        printf("%d\n",s);
    }
    system("pause");
    return 0;
}
