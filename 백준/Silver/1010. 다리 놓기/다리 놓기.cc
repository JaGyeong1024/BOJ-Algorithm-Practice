#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;

    cin >> T;

    long long arr[31][31] = {0};
    for (int m = 0; m<=30; m++) arr[0][m] = 1;

        for (int n = 1; n <= 30; n++){
            for (int m = n; m <=30; m++){
                arr[n][m] = arr[n][m-1] + arr[n-1][m-1];
            }
        }

    while(T--){
        int N, M;

        cin >> N >> M;
        
        cout << arr[N][M] << "\n";
    }


    return 0;
}