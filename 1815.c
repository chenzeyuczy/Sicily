#include<stdio.h>
#include<math.h>
int main()
{
    double d,x1,x2,y1,y2;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
        d=pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
        printf("%.2lf\n",d);
    }
    system("pause");
    return 0;
}

