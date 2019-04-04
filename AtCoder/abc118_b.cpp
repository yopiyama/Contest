#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 30;
const int MAX_M = 30;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, M, K;
    cin >> N >> M;
    int A[MAX_M] = {};

    int tmp1;
    for (int i = 0; i < N; i++) {
        cin >> K;
        for (int j = 0; j < K; j++) {
            cin >> tmp1;
            A[tmp1 - 1]++;
        }
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (A[i] == N) count++;
    }

    cout << count << "\n";

    return 0;
}