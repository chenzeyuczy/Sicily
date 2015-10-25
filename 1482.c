#include<stdio.h>
int main()
{
    int i,j,n,t,tem=0;
    struct recode{
        int yu,shu,ying,sum;
    };
    while(scanf("%d",&n)!=EOF){
        struct recode stu[n];
        int rank[n];
        for(i=0;i<n;i++){
            scanf("%d %d %d",&stu[i].yu,&stu[i].shu,&stu[i].ying);
            stu[i].sum=stu[i].yu+stu[i].shu+stu[i].ying;
            rank[i]=i;
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(stu[rank[i]].sum<stu[rank[j]].sum){
                    t=rank[i];
                    rank[i]=rank[j];
                    rank[j]=t;
                }
                else if(stu[rank[i]].sum==stu[rank[j]].sum){
                    if(stu[rank[i]].yu<stu[rank[j]].yu){
                        t=rank[i];
                        rank[i]=rank[j];
                        rank[j]=t;
                    }
                }
            }
        }
        if(tem==1)printf("\n");
        for(i=0;i<5;i++)printf("%d %d\n",rank[i]+1,stu[rank[i]].sum);
        tem=1;
    }
    system("pause");
    return 0;
}
