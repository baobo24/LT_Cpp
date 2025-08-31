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
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int sum = 0;
		for(int i=0; i<k; i++){
			sum += a[i];
		}
		int res = sum;
		for(int i=k; i<n; i++){
			sum += a[i];
			sum -= a[i-k];
			res = min(res, sum); 
		}
		cout << res << endl;
	}
	return 0;
}
