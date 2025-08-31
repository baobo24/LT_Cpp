#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool check(ll n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(abs(a - n%10) != 1)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(check(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
