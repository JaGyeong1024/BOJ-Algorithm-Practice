#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string inst;
		int x = 0;
		
		cin >> inst;

		if (inst == "push") {
			cin >> x;
			s.push(x);
		}
		else if (inst == "pop") {
			if (s.empty() != true) {
				cout << s.top() << "\n";
				s.pop();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (inst == "size") cout << s.size() << "\n";
		else if (inst == "empty") cout << (s.empty() ? 1 : 0) << "\n";
		else if (inst == "top") {
			if (s.empty() != true) {
				cout << s.top() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}

	return 0;
}