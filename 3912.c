#include<stdio.h>
#include<math.h>
int main()
{
    int m,d,i,t,s;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&m,&d);
        switch(m){
            case 1:{s=d;break;}
            case 2:{s=d+31;break;}
            case 3:{s=d+59;break;}
            case 4:{s=d+90;break;}
            case 5:{s=d+120;break;}
            case 6:{s=d+151;break;}
            case 7:{s=d+181;break;}
            case 8:{s=d+212;break;}
            case 9:{s=d+243;break;}
            case 10:{s=d+273;break;}
            case 11:{s=d+304;break;}
            case 12:{s=d+334;break;}
            }
        s%=7;
        switch(s){
            case 0:{printf("Friday\n");break;}
            case 1:{printf("Saturday\n");break;}
            case 2:{printf("Sunday\n");break;}
            case 3:{printf("Monday\n");break;}
            case 4:{printf("Tuesday\n");break;}
            case 5:{printf("Wednesday\n");break;}
            case 6:{printf("Thursday\n");break;}
            }
        }
    system("pause");
    return 0;
}

