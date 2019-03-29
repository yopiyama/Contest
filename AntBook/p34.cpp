#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 20;
int n, k;
int a[MAX_N];

bool dfs(int i, int sum) {
    if (i == n) return sum == k;

    if (dfs(i + 1, sum)) return true;

    if (dfs(i + 1, sum + a[i])) return true;

    return false;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;

    string ans;
    if (dfs(0, 0)) {
        ans = "Yes\n";
    } else {
        ans = "No\n";
    }

    cout << ans;

    return 0;
}