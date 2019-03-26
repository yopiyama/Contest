#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    int count_0, count_1;
    count_0 = count(S.begin(), S.end(), '0');
    count_1 = count(S.begin(), S.end(), '1');
    if (count_0 > count_1) {
        cout << 2 * count_1 << "\n";
    } else {
        cout << 2 * count_0 << "\n";
    }
    return 0;
}