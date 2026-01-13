#include <iostream>
#include<algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	sort(s.begin(), s.end(), greater<char>());
	
	cout << s;

	return 0;
}