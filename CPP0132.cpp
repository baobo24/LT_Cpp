#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void phantich(ll n){
	ll res = 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			res = i;
			while( n%i==0 ){
				n /= i;
			}			
		}
	}
	if(n!=1)
		cout << n << endl;
	else cout << res << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		phantich(n);
	}
	return 0;
}
