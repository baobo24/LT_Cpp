#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

vector<ll> v;
bool snt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
void shh(){
	for(ll i = 1; i<=50; i++){
		if(snt(i)){
			ll a = pow(2, i) - 1;
			ll b = pow(2, i-1);
			if(snt(a))
				v.push_back(a * b);
		}
	}
}
int main(){
	shh();
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(binary_search(v.begin(), v.end(), n))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
