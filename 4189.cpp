#include<stdio.h>
#include<set>
using namespace std;
int main()
{
       int t, i;
       set<int> m;
       while(scanf("%d",&t) != EOF  && t != 0){
           while(t--){
               scanf("%d",&i);
               m.insert(i);
           }
           printf("%ld\n", m.size());
           m.clear();
       }
       system("pause");
       return 0;
}
