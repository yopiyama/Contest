#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    double x;
    string u;
    double sum = 0.0;
    double rate = 380000.0;
    for (int i = 0; i < N; i++) {
        cin >> x >> u;
        if (u == "JPY") {
            sum += x;
        } else {
            sum += (rate * x);
        }
    }

    cout << fixed << sum << "\n";
    return 0;
}