#include<stdio.h>
int main()
{
    int i,j,a,b,c,d,t;
    long up,down,min;
    scanf("%d",&t);
    for(i=0;i<t;i++){
                     scanf("%d %d %d %d",&a,&b,&c,&d);
                     up=(long)a*d+(long)b*c;
                     down=(long)b*d;
                     
                     if((up%down)==0){
                                      up/=down;
                                      printf("%d\n",up);
                                      continue;
                                      }
                     if(up<down)min=up;
                     else min=down;
                     for(j=2;j<(min+1);j++){
                                            if(((up%j)==0)&&((down%j)==0)){
                                                                           up/=j;
                                                                           down/=j;
                                                                           if(up<down)min=up;
                                                                           else min=down;
                                                                           j--;
                                                                           }
                                            }
                     printf("%ld/%ld\n",up,down);
                     }
    system("pause");
    return 0;
}
