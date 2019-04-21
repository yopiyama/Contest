#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int num[6];
    int tmp;
    for (int i = 0; i < 6; i++) {
        cin >> tmp;
        num[i] = tmp;
    }
    bool flag = true;
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[i] - num[j] > num[5]) {
                flag = false;
                break;
            }
        }
    }

    string out = flag ? "Yay!" : ":(";

    cout << out << "\n";

    return 0;
}