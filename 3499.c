#include<stdio.h>
int main()
{
    int i,t,j,m,tem;
    float av;
    scanf("%d",&t);
    for(i=0;i<t;i++){
                     scanf("%d",&m);
                     av=0;
                     int score[m];
                     for(j=0;j<m;j++)scanf("%d",&score[j]);
                     for(j=0;j<(m-1);j++){
                                          if(score[j]>score[m-1]){
                                                                  tem=score[m-1];
                                                                  score[m-1]=score[j];
                                                                  score[j]=tem;
                                                                  }
                                          }
                     for(j=0;j<(m-2);j++){
                                          if(score[j]<score[m-2]){
                                                                  tem=score[m-2];
                                                                  score[m-2]=score[j];
                                                                  score[j]=tem;
                                                                  }
                                          }
                     for(j=0;j<(m-2);j++)av+=score[j];
                     av/=(m-2);
                     printf("%.2f\n",av);
                     }
    system("pause");
    return 0;
}
