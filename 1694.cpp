#include<iostream>
using namespace std;
int main()
{
    int i,j,t,n,x,y;
    long m,d;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        for(j=n;j>0;j-=2){
            if(m>(j-2)*(j-2)){
                if(m==j*j){
                    x=(n+j)/2;y=(n-j)/2+1;
                    break;
                }
                d=j*j-m;
                if(d<j){
                    x=(n+j)/2-d;
                    y=(n-j)/2+1;
                }
                else if(d<2*j-1){
                    x=(n-j)/2+1;
                    y=d-j+1+(n-j)/2+1;
                }
                else if(d<3*j-2){
                    x=(d-2*(j-1))+(n-j)/2+1;
                    y=(n+j)/2;
                }
                else {
                    x=(n+j)/2;
                    y=(n+j)/2-(d-3*(j-1));
                }
                break;
            }
        }
        cout<<y<<' '<<x<<endl;
    }
    system("pause");
    return 0;
}
