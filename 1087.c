#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF){
                                if(n==0)break;
                                if(n==1||n==2)printf("Alice\n");
                                else printf("Bob\n");
                                }
    return 0;
}
