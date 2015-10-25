#include<iostream>
using namespace std;
int main(){
    int i,j,n,k,max,min,c,s=1;
    cin>>n>>k;
    int d[n];
    for(i=0;i<n;i++)cin>>d[i];
    for(i=0;i<n;i++){
        c=1;
        min=max=d[i];
        for(j=i+1;j<n;j++){
            if(d[j]<min)min=d[j];
            else if(d[j]>max)max=d[j];
            if(max-min>k)break;
            c++;
        }
        if(c>s)s=c;
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}
