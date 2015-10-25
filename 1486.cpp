#include <stdio.h>
#include <map>

int main() {
    int n, i, num, flag = 0;
    while (scanf("%d", &n) != EOF) {
        if (flag)
            printf("\n");
        else
            flag = 1;
        std::map<int, int> list;
        std::map<int, int>::iterator p;
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            if (list.find(num) == list.end())
                list[num] = 1;
            else
                list[num]++;
        }
        for (p = list.begin(); p != list.end(); p++)
            if (p->second)
                printf("%d %d\n", p->first, p->second);
    }
    return 0;
}
