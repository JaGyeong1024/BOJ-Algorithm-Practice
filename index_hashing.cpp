#include<iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int N = 0;
	cin >> N;
	int count[1001] = { 0 };

	for (int i = 0; i < N; i++) {
		int number = 0;
		cin >> number;
		count[number]++;
	}

	for (int j = 0; j < 1000; j++)
		for (int k = 0; k < count[j]; k++)
			cout << j << ' ';

	return 0;
}