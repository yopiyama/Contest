#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, Q;
    string S;
    cin >> N >> Q;
    cin >> S;
    vector<pair<int, int>> lr;
    int tmp_l, tmp_r;
    for (int i = 0; i < Q; i++) {
        cin >> tmp_l >> tmp_r;
        lr.push_back(make_pair(tmp_l, tmp_r));
    }
    vector<int> mem;
    int count = 0;
    char buf = ' ';
    for (auto itr = S.begin(); itr != S.end(); ++itr) {
        if (*itr == 'A') {
            buf = 'A';
        } else if (buf == 'A' && *itr == 'C') {
            count++;
            buf = ' ';
        } else {
            buf = ' ';
        }
        mem.push_back(count);
    }
    for (int i = 0; i < Q; i++) {
        cout << mem[lr[i].second - 1] - mem[lr[i].first - 1] << "\n";
    }
    return 0;
}