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
		int n, m; cin >> n >> m;
		int a[n], b[m], c[m+n];
		int dem = 0;
		foru(i, 0, n-1){
			cin >> a[i];
			c[dem] = a[i];
			dem++;
		}
		foru(i, 0, m-1){
			cin >> b[i];
			c[dem] = b[i];
			dem++;
		}
		sort(c, c+m+n);
		foru(i, 0, n+m-1){
			cout << c[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
