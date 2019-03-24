#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int N, Q;
	string S;
	string tmp;
	int l = 0, r = 0;
	int count = 0;

	cin >> N >> Q;
	cin >> S;

	for (int i = 0; i < Q; i++)
	{
		cin >> l >> r;
		for (int j = l; i < r; i += 2)
		{
			if (S[j] == 'A' && S[j + 1] == 'C')
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
