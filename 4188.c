#include<stdio.h>
int main()
{
    int i,j,t,a[35];
    unsigned long n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lu",&n);
        if(n==0){printf("0\n");continue;}
        for(j=0;n>0;j++){
            a[j]=n%2;
            n/=2;
        }
        for(--j;j>=0;j--)printf("%d",a[j]);
        printf("\n");
    }
    system("pause");
    return 0;
}
