#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool snt(ll n){
	for(ll i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		ll dem = 0;
		for(ll i=sqrt(a); i<=sqrt(b); i++){
			if(snt(i))
				dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
