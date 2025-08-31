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
		int a[n], b[n]; 
		foru(i, 0, n-1){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int l = 0, r = n-1;
		foru(i, 0, n-1){
			if(a[i] != b[i]){
				l = i;
				break;
			}
		}
		ford(i, n-1, 0){
			if(a[i] != b[i]){
				r = i;
				break;
			}
		}
		cout << l+1 << ' ' << r+1 << endl;
	}
	return 0;
}
