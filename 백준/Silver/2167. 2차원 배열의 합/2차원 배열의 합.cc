#include<iostream>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<vector<long long>> sum(N + 1, vector<long long>(M + 1, 0));

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			long long v;
			cin >> v;
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + v;
		}
	}
	
	int k = 0;
	cin >> k;

	while (k--) {
		int i, j, x, y;
		cin >> i >> j >> x >> y;

		long long ans = sum[x][y] - sum[i - 1][y] - sum[x][j - 1] + sum[i - 1][j - 1];

		cout << ans << '\n';
	}

	return 0;
}
