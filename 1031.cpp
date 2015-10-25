#include <iostream>
#include <string>
#include <map>
#include <string.h>

using namespace std;

int main() {
  int t, n, count, dis, path[201][201];
  string src, tar;
  map<string, int> address;
  cin >> t;
  while (t--) {
    cin >> n;
    count = 0;
    address.clear();
    memset(path, -1, sizeof(path));
    while (n--) {
      cin >> src >> tar >> dis;
      if (address.find(src) == address.end())
        address[src] = count++;
      if (address.find(tar) == address.end())
        address[tar] = count++;
      path[address[src]][address[tar]] = path[address[tar]][address[src]] = dis;
    }
    for (int i = 0; i < count; i++)
      path[i][i] = 0;
    for (int i = 0; i < count - 1; i++) {
      for (int j = 0; j < count; j++) {
        for (int k = j + 1; k < count; k++) {
          if (path[j][k] < 0)
            continue;
          for (int l = 0; l < count; l++) {
            if (path[k][l] < 0)
              continue;
            if (path[j][l] < 0 || path[j][l] > path[j][k] + path[k][l])
              path[j][l] = path[l][j] = path[j][k] + path[k][l];
          }
        }
      }
    }
    cin >> src >> tar;
    if (src == tar)
      cout << 0 << endl;
    else if (address.find(src) == address.end() || address.find(tar) == address.end())
      cout << -1 << endl;
    else
      cout << path[address[src]][address[tar]] << endl;
  }
}
