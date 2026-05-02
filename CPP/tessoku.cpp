#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define yes() cout << "Yes" << endl;
#define no() cout << "No" << endl;

<<<<<<< HEAD
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
=======

int count_report_num(vector<vector<int>> &children, int x) {
	if (children.at(x).size() == 0)
		return 1;

	int ans = 0;
	for (int c: children.at(x))
	{
		ans += count_report_num(children, c);
	}
	ans++;
	return ans;
>>>>>>> d03a97e (atcoder)
}



int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  vector<vector<int>> children(N);
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}



// int complete_time(vector<vector<int>> &children, int x) {

// 	if (children.at(x).size() == 0)
// 		return 0;
// 	int max_time = 0;
// 	for (int c: children.at(x))
// 	{
// 		int time = complete_time(children, c) + 1;
// 		max_time = max(time, max_time);
// 	}

// 	return max_time;
// }

// // これ以降の行は変更しなくてよい

// int main() {
//   int N;
//   cin >> N;

//   vector<int> p(N);
//   p.at(0) = -1;
//   for (int i = 1; i < N; i++)
//     cin >> p.at(i);


//   vector<vector<int>> children(N);
//   for (int i = 1; i < N; i++) {
//     int parent = p.at(i);
//     children.at(parent).push_back(i);
//   }

//   cout << complete_time(children, 0) << endl;
// }



// int main() {
//   int N, S;
//   cin >> N >> S;
//   vector<int> A(N), P(N);
//   for (int i = 0; i < N; i++) {
//     cin >> A.at(i);
//   }
//   for (int i = 0; i < N; i++) {
//     cin >> P.at(i);
//   }

//   int ans = 0;

//   for (int i = 0;  i < N; i++)
//   {
// 	for (int j = 0; j < N; j++)
// 	{
// 		if (A.at(i) + P.at(j) == S)
// 			ans++;
// 	}
//   }
//   cout << ans << endl;
// }
