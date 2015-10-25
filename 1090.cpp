#include <iostream>
#include <algorithm>

using namespace std;

struct Edge {
	int start, end, dis;
};

bool cmp(const Edge& a, const Edge& b) {
	return a.dis < b.dis;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		Edge edge[n * (n - 1) / 2];
		int max, dis, index = 0, group[n], counter = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> dis;
				if (i < j) {
					edge[index].start = i;
					edge[index].end = j;
					edge[index].dis = dis;
					index++;
				}
			}
			group[i] = i;
		}
		sort(edge, edge + index, cmp);
		for (int i = 0; i < index && counter < n - 1; i++) {
			int gStart = group[edge[i].start], gEnd = group[edge[i].end];
			while (gStart != group[gStart]) {
				gStart = group[gStart];
			}
			while (gEnd != group[gEnd]) {
				gEnd = group[gEnd];
			}
			if (gStart != gEnd) {
				counter++;
				max = edge[i].dis;
				group[gStart] = group[gEnd];
			}
		}
		cout << max << endl;
		if (t) {
			cout << endl;
		}
	}
	return 0;
}
