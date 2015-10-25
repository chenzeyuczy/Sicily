#include <stdio.h>
#include <vector>

using namespace std;

int list[] = {11, 23, 29, 37, 41, 43, 47, 53, 59};
vector<long long> factor;

void comput(long long num) {
    bool flag = false;
    for (long long i = 3; i * i <= num;) {
        if (num % i == 0) {
            flag = true;
            num /= i;
            factor.push_back(i);
        } else {
            i += 2;
        }
    }
    if (flag)
        factor.push_back(num);
}

int main() {
    int n;
    long long num;
    scanf("%d", &n);
    for (int i = 0; list[i] <= n && i < 9; i++) {
        factor.clear();
        num = (1LL << list[i]) - 1;
        comput(num);
        for (int j = 0; j < factor.size(); j++) {
            if (j)
                printf(" * ");
            printf("%lld", factor[j]);
        }
        printf(" = %lld = ( 2 ^ %d ) - 1\n", num, list[i]);
    }
    return 0;
}
