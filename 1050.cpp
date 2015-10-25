#include <iostream>

using namespace std;

#define SIZE (5)
#define INF (0xfffffff)

int target, highest;
int *number;
bool flag;

int calculate(int a, int b, int choice) {
    int tem;
    if (a < b) {
        tem = a;
        a = b;
        b = tem;
    }
    switch(choice) {
    case 0:
         return a + b;
    case 1:
         return a - b;
    case 2:
         return b - a;
    case 3:
         return a * b;
    case 4:
        if (b == 0 || a % b != 0)
            return -1;
        else 
            return a / b;
    }
}

void dfs(const int* array, int size) {
    if (size == 1)
        return;
    int *tem = new int[size - 1], value, counter;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (flag)
                break;
            for (int l = 0; l < 5; l++) {
                counter = 0;
                value = calculate(array[i], array[j], l);
                if (value == -1 && l == 4)
                    break;
                if (value <= target && value > highest) {
                    highest = value;
                    if (highest == target) {
                        flag = true;
                        break;
                    }
                }
                for (int k = 0; k < size; k++) {
                    if (k != i && k != j)
                        tem[counter++] = array[k];
                }
                tem[counter] = value;
                dfs(tem, size - 1);
            }
        }
    }
    delete[] tem;
}

int main() {
    int t;
    cin >> t;
    number = new int[SIZE];
    while (t--) {
        flag = false;
        highest = -INF;
        for (int i = 0; i < SIZE; i++) {
            cin >> number[i];
        }
        cin >> target;
        for (int i = 0; i < SIZE; i++) {
            if (number[i] > highest && number[i] <= target)
                highest = number[i];
        }
        dfs(number, SIZE);
        cout << highest << endl;
    }
    delete[] number;
    return 0;
}
