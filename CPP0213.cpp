#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
ll f[92];
void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i=2; i<=92; i++){
		f[i] = f[i-1] + f[i-2];
	}
}
int main(){
	fibo();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n];
		foru(i, 0, n-1) cin >> a[i];
		foru(i, 0, n-1){
			if(binary_search(f, f+92, a[i]))
				cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
