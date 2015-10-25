#include <stdio.h>
#include <string.h>

const int max = 1000001;
int prim[100000], counter = 0;

void searchPrime() {
    int prime[max];
    memset(prime, 1, sizeof(prime));
    prim[counter++] = 2;
    for (int i = 3; i < max; i += 2) {
        if (prime[i] == 0)
            continue;
        prim[counter++] = i;
        for (int j = 2 * i; j < max; j += i)
            prime[j] = 0;
    }
}

int isDividor(const char* num, int div) {
    int sum = 0, l = strlen(num);
    for (int i = 0; i < l; i++) {
        sum *= 10;
        sum += num[i] - '0';
        sum %= div;
    }
    return sum == 0 ? 1 : 0;
}

int main() {
    char num[101];
    int l, p;
    searchPrime();
    while (scanf("%s%d", num, &l)) {
        if (num[0] == '0' && l == 0)
            break;
        p = 0;
        for (int i = 0; i < counter && prim[i] < l; i++) {
            if (isDividor(num, prim[i])) {
                p = prim[i];
                break;
            }
        }
        if (p == 0)
            printf("GOOD\n");
        else
            printf("BAD %d\n", p);
        memset(num, '\0', sizeof(num));
    }
    return 0;
}

