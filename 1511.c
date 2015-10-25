#include<stdio.h>
int main()
{
    int i,n;
    double s;
    char u[2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %s",&s,u);
        if(u[0]=='k'){
            s*=2.2046;
            printf("%d %.4lf lb\n",i+1,s);
        }
        else if(u[0]=='g'){
            s*=3.7854;
            printf("%d %.4lf l\n",i+1,s);
        }
        else if(u[1]=='b'){
            s*=0.4536;
            printf("%d %.4lf kg\n",i+1,s);
        }
        else {
            s*=0.2642;
            printf("%d %.4lf g\n",i+1,s);
        }
        u[0]='\0';
        u[1]='\0';
    }
    system("pause");
    return 0;
}
