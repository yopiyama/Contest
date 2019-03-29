#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B, K;
    cin >> A >> B >> K;
    int gcd_AB = __gcd(A, B);
    vector<int> divisor;

    for (int i = 1; i <= gcd_AB / 2; i++) {
        if (gcd_AB % i == 0) {
            divisor.push_back(i);
        }
    }
    divisor.push_back(gcd_AB);
    reverse(divisor.begin(), divisor.end());
    cout << divisor.at(K - 1) << "\n";

    return 0;
}
