#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,k,t,l;
    char s[100],tem;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        l=strlen(s);
        for(j=0;j<l;j++){
            if(s[j]=='0')continue;
            for(k=j+1;k<l;k++){
                if(s[k]=='0')break;
                if(s[k]>s[j]){
                    tem=s[j];
                    s[j]=s[k];
                    s[k]=tem;
                }
            }
        }
        cout<<s<<endl;
        for(j=0;j<l;j++)s[j]='\0';
    }
    system("pause");
    return 0;
}
