#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	int n, m, i, a, b, step, sum, *indegree;
	bool *visit, flag;
	queue<int> list;
	vector<int> edge[10001];
	vector<int>::iterator it;
	cin >> n >> m;
	indegree = new int[n + 1];
	visit = new bool[n + 1];
	for (i = 1; i <= n; i++) {
		visit[i] = false;
		indegree[i] = 0;
	}
	for (i = 0; i< m; i++) {
		cin >> a>> b;
		edge[b].push_back(a);
		indegree[a]++;
	}
	step = 0;
	sum = n * 100;
	while (1) {
		for (i = 1; i <= n; i++) {
			if(visit[i] || indegree[i])
				continue;
			list.push(i);
		}
		sum += step++ * list.size();
		if (list.empty())
			break;
		while (!list.empty()) {
			i = list.front();
			list.pop();
			visit[i] = true;
			for (it = edge[i].begin(); it != edge[i].end(); it++)
				indegree[*it]--;
			edge[i].clear();
		}
	}
	flag = true;
	for (i = 1; i <= n; i++) {
		if (!visit[i]) {
			flag = false;
			break;
		}
	}
	if (flag)
		cout << sum << endl;
	else
		cout << "Poor Xed" << endl;
	delete []indegree;
	delete []visit;
	system("pause");
	return 0;
}