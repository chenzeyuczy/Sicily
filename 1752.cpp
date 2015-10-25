#include <stdio.h>
#include <string.h>

using namespace std;

#define MAX (1000000)

bool isPrime[MAX];
int prime[MAX / 10], count;

void findPrime() {
    memset(isPrime, 0xff, sizeof(isPrime));
    count = 0;
    prime[count++] = 2;
    for (int i = 3; i < MAX; i += 2) {
        if (!isPrime[i])
            continue;
        prime[count++] = i;
        for (int j = i + i; j < MAX; j += i)
            isPrime[j] = false;
    }
}

int locate(int n) {
    int low = 0, high = count, mid;
    while (low < high - 1) {
        mid = (low + high) / 2;
        if (prime[mid] > n)
            high = mid;
        else
            low = mid;
    }
    return low + 1;
}

int main() {
    findPrime();
    int n;
    while (scanf("%d", &n) && n != -1)
        printf("%d\n", locate(n));
    return 0;
}
