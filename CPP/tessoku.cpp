#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define yes() cout << "Yes" << endl;
#define no() cout << "No" << endl;

int main()
{
	int t, n;
	cin >> t >> n;

	vector<int> l(n + 1), r(n + 1), attendance(t + 1, 0), ans(t + 1);
	for (int i = 1; i <= n; i++)
		cin >> l[i] >> r[i];
	
	for (int i = 1; i <= n; i++) {
		attendance[l[i]]++;
		attendance[r[i]]--;
	}	
	
	ans[0] = attendance[0];
	for (int i = 1; i <= t; i++) 
		ans[i] = ans[i - 1] + attendance[i];
	
	rep(i, t)
		cout << ans[i] << endl;

	return (0);
}
