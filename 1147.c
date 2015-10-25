#include<stdio.h>
int main()
{
    int i,n,max=0,t;
    long all=0;
    scanf("%d",&n);
    struct {
        char name[20],gb,xb;
        int qimo,banji,lunwen,sum;
    }stu[n];
    for(i=0;i<n;i++){
        scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].gb,&stu[i].xb,&stu[i].lunwen);
        stu[i].sum=0;
        if(stu[i].qimo>80&&stu[i].lunwen>0)stu[i].sum+=8000;
        if(stu[i].qimo>85&&stu[i].banji>80)stu[i].sum+=4000;
        if(stu[i].qimo>90)stu[i].sum+=2000;
        if(stu[i].qimo>85&&stu[i].xb=='Y')stu[i].sum+=1000;
        if(stu[i].gb=='Y'&&stu[i].banji>80)stu[i].sum+=850;
        if(stu[i].sum>max){t=i;max=stu[i].sum;}
        all+=stu[i].sum;
        }
    printf("%s\n%d\n%ld\n",stu[t].name,stu[t].sum,all);
    system("pause");
    return 0;
}
