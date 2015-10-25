#include<stdio.h>
int main()
{
    int w1,w2,w3,r1,r2,r3,r4,p,a,c=1;
    long s1,s2,s;
    while(scanf("%d %d %d %d %d %d %d",&w1,&r1,&w2,&r2,&w3,&r3,&r4)!=EOF){
        printf("Set number %d:\n",c++);
        while(scanf("%d",&p)!=EOF){
            if(p==0)break;
            if(p<=w1){
                s1=p*r1;
                s2=(w1+1)*r2;
                if(s1>s2){
                    s=s2;
                    a=w1+1-p;
                }
                else {
                    s=s1;
                    a=0;
                }
            }
            else if(p<=w2){
                s1=p*r2;
                s2=(w2+1)*r3;
                if(s1>s2){
                    s=s2;
                    a=w2+1-p;
                }
                else {
                    s=s1;
                    a=0;
                }
            }
            else if(p<=w3){
                s1=p*r3;
                s2=(w3+1)*r4;
                if(s1>s2){
                    s=s2;
                    a=w3+1-p;
                }
                else {
                    s=s1;
                    a=0;
                }
            }
            else {
                s=p*r4;
                a=0;
            }
            printf("Weight (%d) has best price $%ld (add %d pounds)\n",p,s,a);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
