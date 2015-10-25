#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    while(cin>>n){
        int a[n][n],b[n][n],c[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
                c[i][j]=0;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>b[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j>0)cout<<' ';
                cout<<c[i][j];
            }
            cout<<endl;
        }
    }
    system("pause");
    return 0;
}
