#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a,b,c,s,t,i;
    char v[70];
    while(cin>>v){
        if(v[0]=='#')break;
        s=strlen(v);
        a=0;b=0;c=0;t=0;
        for(i=0;i<s;i++){
            if(v[i]=='Y')a++;
            else if(v[i]=='N')b++;
            else if(v[i]=='A')c++;
            if(c>=(float)s/2){
                t=1;
                break;
            }
        }
        if(t==1)cout<<"need quorum";
        else if(a>b)cout<<"yes";
        else if(a==b)cout<<"tie";
        else if(a<b)cout<<"no";
        cout<<endl;
        for(i=0;i<s;i++)v[i]='\0';
    }
    system("pause");
    return 0;
}
