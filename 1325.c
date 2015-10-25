#include<stdio.h>
int main()
{
    int i,t,a[5],c;
    long j,n,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%ld",&n);
        c=0;
        if(n>10000){
            for(j=n-45;j<n;j++){
                a[0]=j%10;
                a[1]=j%100/10;
                a[2]=j%1000/100;
                a[3]=j%10000/1000;
                a[4]=j/10000;
                sum=j+a[0]+a[1]+a[2]+a[3]+a[4];
                if(sum==n){
                    printf("%ld\n",j);
                    c=1;
                    break;
                }
            }
        }
        else if(n>1000){
            for(j=n-36;j<n;j++){
                a[0]=j%10;
                a[1]=j%100/10;
                a[2]=j%1000/100;
                a[3]=j%10000/1000;
                sum=j+a[0]+a[1]+a[2]+a[3];
                if(sum==n){
                    printf("%ld\n",j);
                    c=1;
                    break;
                }
            }
        }
        else if(n>100){
            for(j=n-27;j<n;j++){
                a[0]=j%10;
                a[1]=j%100/10;
                a[2]=j%1000/100;
                sum=j+a[0]+a[1]+a[2];
                if(sum==n){
                    printf("%ld\n",j);
                    c=1;
                    break;
                }
            }
        }
        else if(n>20){
            for(j=n-18;j<n;j++){
                a[0]=j%10;
                a[1]=j%100/10;
                sum=j+a[0]+a[1];
                if(sum==n){
                    printf("%ld\n",j);
                    c=1;
                    break;
                }
            }
        }
        else {
            for(j=1;j<n;j++){
                a[0]=j%10;
                a[1]=j%100/10;
                sum=j+a[0]+a[1];
                if(sum==n){
                    printf("%ld\n",j);
                    c=1;
                    break;
                }
            }
        }
        if(c==0)printf("0\n");
    }
    system("pause");
    return 0;
}
