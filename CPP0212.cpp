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
	int t; cin >> t;
	while(t--){
		ll n, x; cin >> n >> x;
		ll a[n];
		for(ll i=0; i<n; i++) cin >> a[i];
		ll kq = 0;
		for(ll i=0; i<n; i++){
			kq = (kq * x +a[i]) % mod;
		}
		cout << kq << endl;
	}
	return 0;
}
