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
		int n; cin >> n;
		int a[n];
		foru(i, 0, n-1) cin >> a[i];
		sort(a, a+n);
		foru(i, 1, 100000){
			if(!binary_search(a, a+n, i)){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
