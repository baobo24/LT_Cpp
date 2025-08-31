#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll res = 0;
	for(int i=0; i<n; i++){
		auto it = lower_bound(v.begin(), v.end(), k-v[i]);
		res += it - (v.begin()+i) - 1;
	}
	cout << res;
	return 0;
}
