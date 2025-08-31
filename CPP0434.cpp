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
		int n; cin >> n;
		int a[n], b[n];
		foru(i, 0, n-1){
			cin >> a[i];
			b[i] = a[i];
		}
		for(int i=1; i<n-1; i++){
			a[i] = b[i-1] * b[i+1];
		}
		a[0] *= b[1];
		a[n-1] *= b[n-2];
		foru(i, 0, n-1){
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
