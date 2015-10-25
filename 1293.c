#include<stdio.h>
int main()
{
    long i,j,k,l,t,max=1;
    scanf("%d %d",&i,&j);
    for(k=i;k<=j;k++){
        l=1;t=k;
        while(t>1){
            if((t%2)==0)t/=2;
            else t=3*t+1;
            l++;
        }
        if(l>max)max=l;
    }
    printf("%d\n",max);
    system("pause");
    return 0;
}
