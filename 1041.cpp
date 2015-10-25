#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool map[20][20];
int h, w, test = 0;

int analyse(string& op) {
    if (op == "left")
        return 1;
    else if (op == "right")
        return 3;
    else if (op == "up")
        return 2;
    else if (op == "down")
        return 4;
    else
        return 0;
}

int detect(int dir, int step) {
    int max = 0, count;
    if (dir % 2 == 1) {
        for (int i = 0; i < h; i++) {
            count = 0;
            for (int j = 0; j < w; j++) {
                if (map[i][j])
                    count++;
            }
            if (count > max)
                max = count;
        }
        max = w - max;
    } else {
        for (int j = 0; j < w; j++) {
            count = 0;
            for (int i = 0; i < h; i++) {
                if (map[i][j])
                    count++;
            }
            if (count > max)
                max = count;
        }
        max = h - max;
    }
    return (max < step) ? max : step;
}

void move(int dir, int step) {
    int count, i, j;
    if (dir == 1) {
        for (i = 0; i < h; i++) {
            count = 0;
            for (j = w - 1; j > w - step - 1; j--) {
                if (map[i][j]) {
                    count++;
                    map[i][j] = false;
                }
            }
            while (count) {
                if (!map[i][j]) {
                    count--;
                    map[i][j] = true;
                }
                j--;
            }
        }
    } else if (dir == 3) {
        for (i = 0; i < h; i++) {
            count = 0;
            for (j = 0; j < step; j++) {
                if (map[i][j]) {
                    count++;
                    map[i][j] = false;
                }
            }
            while (count) {
                if (!map[i][j]) {
                    count--;
                    map[i][j] = true;
                }
                j++;
            }
        }
    } else if (dir == 2) {
        for (j = 0; j < w; j++) {
            count = 0;
            for (i = h - 1; i > h - step - 1; i--) {
                if (map[i][j]) {
                    count++;
                    map[i][j] = false;
                }
            }
            while (count) {
                if (!map[i][j]) {
                    count--;
                    map[i][j] = true;
                }
                i--;
            }
        }
    } else if (dir == 4) {
        for (j = 0; j < w; j++) {
            count = 0;
            for (i = 0; i < step; i++) {
                if (map[i][j]) {
                    count++;
                    map[i][j] = false;
                }
            }
            while (count) {
                if (!map[i][j]) {
                    count--;
                    map[i][j] = true;
                }
                i++;
            }
        }
    }
}

void show() {
    cout << "Data set " << ++test << " ends with boxes at locations";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (map[i][j])
                cout << " (" << i << "," << j << ")";
        }
    }
    cout << "." << endl;
}

int main() {
    string op;
    int x, y, n, dir, step;
    while (cin >> h >> w && h * w) {
        memset(map, false, sizeof(map));
        cin >> n;
        while (n--) {
            cin >> x >> y;
            map[x][y] = true;
        }
        while (cin >> op) {
            dir = analyse(op);
            if (dir == 0)
                break;
            cin >> step;
            step = detect(dir, step);
            move(dir, step);
        }
        show();
    }
    return 0;
}

