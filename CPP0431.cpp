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
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll a[n];
		ll sum = 0;
		foru(i, 0, n-1){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i=0; i<n-1; i++){
			auto it = lower_bound(a, a+n, a[i]+k);
			sum += it-a-i-1;
		}
		cout << sum << endl;
	}
	return 0;
}
