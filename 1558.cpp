#include<iostream>
using namespace std;
int main(){
    int i,a,d,min,c;
    while(cin>>a>>d){
        if(a==0&&d==0)break;
        int m[a],n[d];
        c=0;
        for(i=0;i<a;i++){
            cin>>m[i];
            if(i==0){
                min=m[0];
            }
            else if(m[i]<min)min=m[i];
        }
        for(i=0;i<d;i++){
            cin>>n[i];
            if(n[i]<=min)c++;
        }
        if(c>1)cout<<"N"<<endl;
        else cout<<"Y"<<endl;
    }
    system("pause");
    return 0;
}
