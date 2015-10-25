#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[9];
    int i,l;
    long c;
    while(scanf("%s",s)!=EOF){
        if(s[0]=='0')break;
        l=strlen(s);c=0;
        for(i=0;i<l;i++){
            if(i>l-2){
                if(s[i]>'4')c+=s[i]-'0'-1;
                else c+=s[i]-'0';
            }
            else {
                if(s[i]>'4')c+=(s[i]-'0'-1)*pow(9,l-i-1);
                else c+=(s[i]-'0')*pow(9,l-i-1);
            }
        }
        printf("%s: %ld\n",s,c);
        for(i=0;i<l;i++)s[i]='\0';
    }
    system("pause");
    return 0;
}
