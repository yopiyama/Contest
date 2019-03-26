#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, A, B, C;
    vector<int> l;
    cin >> N >> A >> B >> C;
    vector<int> ABC{A, B, C};

    int tmp;
    vector<pair<int, int>> mem;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        l.push_back(tmp);
        for (int j = 0; j < 3; j++) {
            mem.push_back(make_pair(abs(tmp - ABC[j]), j));
        }
    }
    sort(mem.begin(), mem.end());
    int tmp1;
    int tmp2;
    int cost = 0;
    while (!ABC.empty()) {
        tmp1 = mem[0].first;
        tmp2 = mem[0].second;
        if (tmp1 == 0) {
        } else if (tmp1 > 0 && tmp1 < 10) {
            cost += tmp1;
        } else {
        }
        for (int i = 0; i < N * ABC.size(); i++) {
            if (mem[i].second == tmp2) {
                mem.erase(mem.begin() + i);
            }
        }
        ABC.erase(ABC.begin() + tmp2);
        for (pair<int, int> p : mem) {
            cout << p.first << " - " << p.second << ", ";
        }
        cout << "\n";
    }
    for (pair<int, int> p : mem) {
        cout << p.first << " - " << p.second << ", ";
    }
    return 0;
}