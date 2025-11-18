#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define yes() cout << "Yes" << endl;
#define no() cout << "No" << endl;

int main()
{
	long long n, x, y;
	cin >> n >> x >> y;

	vector<long long> a(n), s(n, 0), l(n, 0);
	rep(i, n)
		cin >> a.at(i);

	long long max_v = *max_element(a.begin(), a.end());
	long long min_v = *min_element(a.begin(), a.end());

	return (0);
}