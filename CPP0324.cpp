#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll reduceA(string a, ll M){
	ll res = 0;
	for(int i=0; i<a.size(); i++){
		res = (res * 10 + (a[i] - '0')) % M;
	}
	return res;
}

ll powMod(ll a, ll b, ll M){
	ll res = 1;
	while(b > 0){
		if(b & 1){
			res *= a;
			res %= M;
		}
		a *= a;
		a %= M;
		b /= 2;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		ll b, M;
		cin >> a >> b >> M;
		ll tmp = reduceA(a, M);
		ll res = powMod(tmp, b, M);
		cout << res << endl;
	}
	return 0;
}
