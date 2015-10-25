#include<stdio.h>
#include<math.h>
int main()
{
    int i,t;
    double x1,x2,x3,y1,y2,y3,l;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
        l=sqrt(pow(x1-x2,2)+pow(y1-y2,2))+sqrt(pow(x1-x3,2)+pow(y1-y3,2))+sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        printf("%.5lf\n",l);
    }
    system("pause");
    return 0;
}
