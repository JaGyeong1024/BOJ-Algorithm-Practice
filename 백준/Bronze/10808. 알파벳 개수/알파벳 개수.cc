#include<iostream>
#include<string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	string s;
	int freq[26] = { 0 };

	cin >> s;
	
	for (auto c : s)
		freq[c - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << freq[i] << ' ';

	return 0;
}