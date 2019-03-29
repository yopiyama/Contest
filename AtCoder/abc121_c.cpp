#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> AB;
    int tmp_A, tmp_B;
    for (int i = 0; i < N; i++) {
        cin >> tmp_A >> tmp_B;
        AB.push_back(make_pair(tmp_A, tmp_B));
    }
    sort(AB.begin(), AB.end());
    reverse(AB.begin(), AB.end());

    ll ans = 0;
    while (M > 0) {
        if (M - AB[N - 1].second >= 0) {
            ans = ans + (AB[N - 1].first * AB[N - 1].second);
            M -= AB[N - 1].second;
            AB.pop_back();
            N--;
        } else {
            ans += (AB[N - 1].first * M);
            M = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}