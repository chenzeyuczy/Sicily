#include<stdio.h>
int main()
{
    int i,j,l,s[3],a[3][4];
    for(i=1000;i<10000;i++)
    {a[0][3]=i%10;
    a[0][2]=(i%100)/10;
    a[0][1]=(i%1000)/100;
    a[0][0]=i/1000;
    a[1][3]=i%12;
    a[1][2]=(i%144)/12;
    a[1][1]=(i%1728)/144;
    a[1][0]=i/1728;
    a[2][3]=i%16;
    a[2][2]=(i%256)/16;
    a[2][1]=(i%4096)/256;
    a[2][0]=i/4096;
    for(j=0;j<3;j++)s[j]=0;
    for(j=0;j<3;j++){
                     for(l=0;l<4;l++)s[j]+=a[j][l];
                     }
    if(s[0]==s[1]&&s[0]==s[2])printf("%d\n",i);
    }
    system("pause");
    return 0;
}
    
