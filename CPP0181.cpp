#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a, x, y;
		cin >> a >> x >> y;
		ll tmp = gcd(x, y);
		foru(i, 1, tmp){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
