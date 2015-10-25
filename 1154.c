#include<stdio.h>
int main()
{
    int t,n,i,j,l;
    long b;
    scanf("%d",&t);
    for(j=0;j<t;j++){
                     scanf("%d",&n);
                     long a[n];
                     for(i=0;i<n;i++)scanf("%ld",&a[i]);
                     for(i=0;i<n;i++){
                                      for(l=i+1;l<n;l++){
                                                      if(a[i]>a[l]){
                                                      b=a[i];
                                                      a[i]=a[l];
                                                      a[l]=b;}}
                                      }
                     for(i=0;i<n;i++)printf("%ld\n",a[i]);
                     }
    system("pause");
    return 0;
}
