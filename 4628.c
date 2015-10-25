#include<stdio.h>
int main()
{
    int i,j,k,t,w,h;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&w,&h);
        for(j=0;j<h;j++){
            for(k=0;k<w;k++){
                if(j==0||j==h-1||k==0||k==w-1)
                printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
