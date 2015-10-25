#include<iostream> 
#include<cstring>
#include<cstdlib>
using namespace std;
class date{
    public:
        long sum;
        date(char[]);
        long count();
    private:
        int y,m,d,c,t;
};
date::date(char s[]){
    int i,day[11]={31,28,31,30,31,30,31,31,30,31,30};
    y=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+s[3]-'0';
    m=(s[5]-'0')*10+s[6]-'0';
    d=(s[8]-'0')*10+s[9]-'0';
    c=d;sum=0;
    if(y%400==0||y%100!=0&&y%4==0)t=1;
    else t=0;
    for(i=0;i<m-1;i++)c+=day[i];
    if(m>2)c+=t;
}    
long date::count(){
    sum+=(y-1)*365+c;
    sum+=(y-1)/400-(y-1)/100+(y-1)/4;
}
int main()
{
    int i,t;
    char q[10];
    cin>>t;
    while(t--){
        cin>>q;
        date t1(q);
        t1.count();
        for(i=0;i<10;i++)q[i]='\0';
        cin>>q;
        date t2(q);
        t2.count();
        for(i=0;i<10;i++)q[i]='\0';
        cout<<labs(t1.sum-t2.sum)<<endl;
    }
    system("pause");
    return 0;
}
