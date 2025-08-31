#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll f[93];
void fibo(){
	f[0] = 0; f[1] = 1;
	foru(i, 2, 92){
		f[i] = f[i-1] + f[i-2];
	}
}
int main(){
	fibo();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int kt = 0;
		foru(i, 0, 92){
			if(n == f[i]){
				kt = 1;
				break;
			}
		}
		if(kt) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
