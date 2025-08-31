#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;


ll powmod(ll x, ll y, ll p){
	ll res = 1;
	while(b){
		 
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x, y, p;
		cin >> x >> y >> p;
		ll res = 1;
		for(int i=1; i<=y; i++){
			res = (res * x) % p; 
		}
		cout << res << endl;
	}
	return 0;
}
