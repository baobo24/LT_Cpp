#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll powMod(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b & 1){
			res *= a;
			res %= mod;
		}
		a *= a;
		a %= mod;
		b /= 2;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		ll a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		int dem = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(powMod(a[i], b[j]) > powMod(b[j], a[i])){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
