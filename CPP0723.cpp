#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

ll gt(ll n){
	ll res = 1;
	for(int i=1; i<=n; i++){
		res *= i;
	}
	return res;
}
void solve(ll a){
	string res = "";
	while(a > 0){
		int tmp = a%10;
		ll b = gt(tmp);
		for(int i=7; i>=2; i--){
			while((i == 2 || i == 3 || i == 5 || i == 7) && b%gt(i) == 0){
				res += to_string(i);
				b /= gt(i);					
			}
		}
		a /= 10;
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, a;
		cin >> n >> a;
		solve(a);
	}
	return 0;
}
