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
ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		cout << lcm(a,b) << " " << gcd(a, b) << endl;
	}
	return 0;
}
