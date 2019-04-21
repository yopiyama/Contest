#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> L(N);
    int tmp;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        L[i] = tmp;
    }

    sort(L.begin(), L.end());
    int largest = L.back();
    L.pop_back();
    int sum = accumulate(L.begin(), L.end(), 0);
    if (largest < sum) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}