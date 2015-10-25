#include <stdio.h>

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
    int countA, countB, maxA, maxB;
    scanf("%d%d%d%d", &countA, &countB, &maxA, &maxB);
    if (countA * maxA == 0) {
        printf("%d\n", min(countB, maxB));
    } else if (countB * maxB == 0) {
        printf("%d\n", min(countA, maxA));
    } else {
        if (countA == countB) {
            printf("%d\n", countA + countB);
        } else if (countA < countB) {
            printf("%d\n", countA + min(countB, (countA + 1) * maxB));
        } else {
            printf("%d\n", countB + min(countA, (countB + 1) * maxA));
        }
    }
    return 0;
}

