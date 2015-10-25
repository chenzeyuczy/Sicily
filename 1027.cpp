#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, i;
	string name, ip;
	map<string, string> mapping;
	map<string, string> majia;
	map<string, string>::iterator it;
	while (cin >> n) {
		if (n == 0)
			break;
		for (i = 0; i < n; i++) {
			cin >> name >> ip;
			if (mapping.find(ip) != mapping.end())
				majia[mapping[ip]] = name;
			else
				mapping[ip] = name;
		}
		for (it = majia.begin(); it != majia.end(); it++) {
			cout << it->second << " is the MaJia of " << it->first << endl;
		}
		cout << endl;
		mapping.clear();
		majia.clear();
	}
	return 0;
}