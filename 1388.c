#include<stdio.h>
#include<string.h>
int main()
{
    char s[260];
    int i,l;
    long sum;
    while(1){
        gets(s);
        if(s[0]=='#')break;
        l=strlen(s);sum=0;
        for(i=0;i<l;i++){
            if(s[i]>='A'&&s[i]<='Z')sum+=(s[i]-'A'+1)*(i+1);
        }
        printf("%ld\n",sum);
        for(i=0;i<260;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
