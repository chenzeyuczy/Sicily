#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,a,b,s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
                     scanf("%d %d",&a,&b);
                     if(a==10000)a=1;
                     else if(a>999)a=a/1000+10*(a%1000/100)+100*(a%100/10)+1000*(a%10);
                     else if(a>99)a=a/100+10*(a%100/10)+100*(a%10);
                     else if(a>9)a=a/10+10*(a%10);
                     if(b==10000)b=1;
                     else if(b>999)b=b/1000+10*(b%1000/100)+100*(b%100/10)+1000*(b%10);
                     else if(b>99)b=b/100+10*(b%100/10)+100*(b%10);
                     else if(b>9)b=b/10+10*(b%10);
                     s=a+b;
                     printf("%d\n",s);
                     }
    system("pause");
    return 0;
}
                     
