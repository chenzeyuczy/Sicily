#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,t,n,c;
    cin>>t;
    long j,m;
    for(i=0;i<t;i++){
        cin>>n>>m;
        c=0;
        for(j=2;j<=sqrt(2*m);j++){
            if((m-(j-1)*j/2)%j==0)c++;
        }
        cout<<i+1<<' '<<c<<endl;
    }
    system("pause");
    return 0;
}
