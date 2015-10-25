#include <stdio.h>
#include <string.h>

#define max (10001)
int counter = 0;
int prime[max / 2];

void searchPrime() {
    int num[max];
    memset(num, 1, sizeof(num));
    for (int i = 2; i < max; i++) {
        if (num[i] == 0)
            continue;
        prime[counter++] = i;
        for (int j = 2 * i; j < max; j += i)
            num[j] = 0;
    }
}

int main() {
    int n, total, sum;
    searchPrime();
    while (scanf("%d", &n) && n) {
        total = 0;
        for (int i = 0; i < counter; i++) {
            sum = 0;
            for (int j = i; j < counter && sum < n; j++) {
                sum += prime[j];
            }
            if (sum == n)
                total++;
        }
        printf("%d\n", total);
    }
    return 0;
}
