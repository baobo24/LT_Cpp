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
	ll n, m ,k;
	cin >> n >> m >> k;
	ll tmp = 1, du = pow(10, k);
	for(int i=1; i<=m; i++){
		tmp *= n;
		tmp %= du;
	}
	cout << tmp;
	return 0;
}
