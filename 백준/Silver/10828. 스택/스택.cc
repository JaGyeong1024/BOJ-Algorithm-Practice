#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	string count;

	getline(cin, count, '\n');
	int N = stoi(count);

	for (int i = 0; i < N; i++) {
		string oper, inst;
		int x = 0;

		getline(cin, oper, '\n');
		stringstream ss(oper);
		ss >> inst;

		if (inst == "push") {
			ss >> x;
			s.push(x);
		}
		else if (inst == "pop")
			if (s.empty() != true) {
				cout << s.top() << "\n";
				s.pop();
			}
			else cout << "-1" << "\n";
		else if (inst == "size") cout << s.size() << "\n";
		else if (inst == "empty") cout << (s.empty() ? 1 : 0) << "\n";
		else if (inst == "top")
			if (s.empty() != true) cout << s.top() << "\n";
			else cout << "-1" << "\n";
	}

	return 0;
}