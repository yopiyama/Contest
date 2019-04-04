#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 8;
int N, A, B, C;
int l[MAX_N] = {};
const int INF = pow(10, 9);

int dfs(int num, int a, int b, int c) {
    // 使った本数が与えられた本数に達した時．
    if (num == N) {
        int abc[] = {a, b, c};
        int tmp = abs(A - a) + abs(B - b) + abs(C - c) - 30;
        return (*min_element(abc, abc + 3) > 0) ? tmp : INF;
    }
    int ret[4];
    // 合成魔法を使わない(延長,縮小魔法のみの場合など?)
    ret[0] = dfs(num + 1, a, b, c);
    // それぞれに合成魔法使う
    ret[1] = dfs(num + 1, a + l[num], b, c) + 10;
    ret[2] = dfs(num + 1, a, b + l[num], c) + 10;
    ret[3] = dfs(num + 1, a, b, c + l[num]) + 10;

    return *min_element(ret, ret + 4);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> A >> B >> C;

    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    cout << dfs(0, 0, 0, 0) << "\n";

    return 0;
}