#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool thuannghich(ll n){
	ll tmp = n;
	ll lat = 0;
	while(n>0){
		lat = lat*10 + n%10;
		n /= 10;
	}
	if(lat == tmp) return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(thuannghich(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
