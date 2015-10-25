#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,t,g,m,p;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>g;
        long a[g],b[g];
        for(j=0;j<g;j++){
            cin>>a[j];
        }
        p=1;
        for(j=1;p==1;j++){
            p=0;
            for(k=0;k<g;k++){
                b[k]=a[k]%j;
                for(l=0;l<k;l++){
                    if(b[k]==b[l]){
                        p=1;
                        break;
                    }
                }
                if(p==1)break;
            }
        }
        cout<<j-1<<endl;
    }
    system("pause");
    return 0;
}
