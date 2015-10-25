#include<stdio.h>
#include<stdlib.h>
int main()
{
    long a,b,c,i,s;
    scanf("%ld %ld %ld",&a,&b,&c);
    a%=c;s=a;
    for(i=1;i<b;i++){
        s*=a;
        s%=c;
    }
    printf("%ld\n",s);
    system("pause");
    return 0;
}
