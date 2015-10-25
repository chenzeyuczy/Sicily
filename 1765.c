#include<stdio.h>
#include<string.h>
int main()
{
    int max,min,i,j,l,c[26],t;
    char s[100];
    while(scanf("%s",s)!=EOF){
        l=strlen(s);max=0;min=0;t=0;
        for(i=0;i<26;i++)c[i]=0;
        for(i=0;i<l;i++)c[s[i]-97]++;
        for(i=0;i<26;i++){
            if(c[i]!=0&&max==0&&min==0){
                min=c[i];
                max=c[i];
            }
            if(c[i]>0&&c[i]<min)min=c[i];
            if(c[i]>max)max=c[i];
        }
        j=max-min;
        if(j==0||j==1)t=1;
        for(i=2;i<j;i++){
            if(j%i==0){
                t=1;
                break;
            }
        }
        if(t==0)printf("Lucky Word\n%d\n",j);
        else printf("No Answer\n0\n");
        for(i=0;i<100;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
