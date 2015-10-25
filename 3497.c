#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    for(a=1;a<10;a++){
                      for(b=0;b<10;b++){
                                        for(c=0;c<10;c++){
                                                          d=100*a+10*b+c;
                                                          if(d==pow(a,3)+pow(b,3)+pow(c,3))
                                                          printf("%d\n",d);
                                                          }
                                        }
                      }
    system("pause");
    return 0;
}
