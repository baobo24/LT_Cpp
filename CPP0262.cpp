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
bool check(ll n, ll m){
	ll sum = n *(n+1) / 2;
	if((sum+m) % 2 != 0)
		return false;
	ll t1 = (sum + m)/2, t2 = (sum - m)/2;
	if(gcd(t1, t2) != 1)
		return false;
	return true;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		if(check(n, m))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
