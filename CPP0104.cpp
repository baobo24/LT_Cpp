#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll gt(int n){
	if(n == 0) return 1;
	return n * gt(n-1);
}
int main(){
	int n; cin >> n;
	ll res = 0;
	foru(i, 1, n){
		res += gt(i);
	}
	cout << res;
	return 0;
}
