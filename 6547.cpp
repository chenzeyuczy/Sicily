#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    while(1){
        cin>>n;
        if(n==-1)break;
        t=1;
        if(n<2||n>2&&n%2==0){
            t=0;
        }
        for(i=3;i<n;i+=2){
            if(n%i==0)t=0;
        }
        if(t==0)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    system("pause");
    return 0;
}
