#include<iostream>
using namespace std;
int main()
{
    int i,j,k,t,n,a,b,p;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        p=0;
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cin>>a;
                if(j==k){
                    if(j==0)b=a;
                    else if(b!=a)p=1;
                }
                else if(j!=k){
                    if(a!=0)p=1;
                }
            }
        }
        if(p==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    system("pause");
    return 0;
}
