#include<iostream>
#include<cmath>
#include<cstdio>
#define pi 3.141592653589793
using std::cin;
class Geometry {
    public:
        Geometry(double a):r(a){}
        ~Geometry(){}
        void operation(){
            s1=pi*r*r;
            c1=2*pi*r;
            s2=4*r*r;
            c2=8*r;
            d=2*sqrt(2)*r;
            s3=pi*2*r*r;
            c3=2*pi*sqrt(2)*r;
            s4=6*sqrt(3)*r*r;
            c4=6*sqrt(6)*r;
        }
        void print(){
            printf("%.4f %.4f\n",s1,c1);
            printf("%.4f %.4f %.4f\n",s2,c2,d);
            printf("%.4f %.4f\n",s3,c3);
            printf("%.4f %.4f\n",s4,c4);
        }
    private:
        double r,s1,c1,s2,c2,s3,c3,s4,c4,d;
};
int main(){
    int t;
    double p;
    cin>>t;
    while(t--){
        cin>>p;
        Geometry graph(p);
        graph.operation();
        graph.print();
    }
    system("pause");
    return 0;
}
