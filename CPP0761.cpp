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
ll reduceB(ll a, string b){
	ll B = 0;
	for(int i=0; i<b.size(); i++){
		B = (B*10 + (b[i] - '0')) % a;
	}
	return B;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a;
		string b;
		cin >> a >> b;
		ll tmp = reduceB(a, b);
		cout << gcd(a, tmp) << endl;
	}
	return 0;
}
