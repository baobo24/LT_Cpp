#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll sum=0;
		foru(i, 1, n){
			sum += i%k;
		}
		if(sum == k)
			cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
