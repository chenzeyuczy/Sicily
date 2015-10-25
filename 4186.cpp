#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    while(cin>>n){
        if(n==0)break;
        int a[n][n],b[n][n],c[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)cin>>a[i][j];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)cin>>b[i][j];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)c[i][j]=a[i][j]+b[i][j];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j>0)cout<<" ";
                cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    system("pause");
    return 0;
}
