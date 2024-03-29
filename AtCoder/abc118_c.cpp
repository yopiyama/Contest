#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    int tmp;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        A[i] = tmp;
    }

    tmp = A[0];
    for (int i : A) {
        tmp = __gcd(tmp, i);
    }

    cout << tmp << "\n";
    return 0;
}