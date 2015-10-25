#include<stdio.h>
int coprime(int a,int b){
    if(a==1||b==1)return 1;
    if(a%b==0||b%a==0)return 0;
    int min=a>b?b:a,i;
    for(i=2;i<min;i++){
        if(a%i==0&&b%i==0)return 0;
    }
    return 1;
}
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        if(coprime(a,b))printf("Yes\n");
        else printf("No\n");
    }
    system("pause");
    return 0;
}
