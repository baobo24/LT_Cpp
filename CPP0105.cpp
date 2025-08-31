#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool check(int n){
	while(n > 0){
		int a = n%10;
		if(a != 0 && a != 6 && a != 8)
			return false;
		n /= 10;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n))
			cout << "YES\n";
		else
			cout <<"NO\n";
	}
	return 0;
}
