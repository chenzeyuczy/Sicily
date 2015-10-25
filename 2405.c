#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l;
    char a[1000],b[1000];
    while(1){
        for(i=0;i<1000;i++)b[i]='\0';
        scanf("%s",a);
        if(a[0]=='#')break;
        l=strlen(a);
        t=0;
        for(i=0;i<l;i++){
            if(t==1)break;
            switch(a[l-i-1]){
                case 'b':
                    b[i]='d';
                    break;
                case 'd':
                    b[i]='b';
                    break;
                case 'p':
                    b[i]='q';
                    break;
                case 'q':
                    b[i]='p';
                    break;
                case 'i':
                    b[i]='i';
                    break;
                case 'o':
                    b[i]='o';
                    break;
                case 'v':
                    b[i]='v';
                    break;
                case 'w':
                    b[i]='w';
                    break;
                case 'x':
                    b[i]='x';
                    break;
                default:t=1;
            }
        }
        if(t==0)printf("%s\n",b);
        else printf("INVALID\n");
        for(i=0;i<l;i++)a[i]='\0';
    }
    system("pause");
    return 0;
}
