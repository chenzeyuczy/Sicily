#include<iostream>
#include<iomanip>
using namespace std;
long zuhe(int,int);
int main()
{
    int a,b;
    long c,s,t;
    double p;
    s=zuhe(26,13);
    while(cin>>a>>b){
        if(a==-1&&b==-1)break;
        c=zuhe(a+b,a)*zuhe(26-a-b,13-a);
        if(a!=b) c+=zuhe(a+b,b)*zuhe(26-a-b,13-b);
        p=(double)c/s;
        cout<<a<<"-"<<b<<" split: "<<setiosflags(ios::fixed)<<setprecision(8)<<p<<endl;
    }
    system("pause");
    return 0;
}
long zuhe(int a,int b)
{
    int i;
    double s=1;
    for(i=0;i<b;i++)s*=a--;
    for(;i>0;i--)s/=i;
    return (long)s;
}
