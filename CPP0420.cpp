#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int k;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n >> k;
		int a[n]; 
		foru(i, 0, n-1){
			cin >> a[i];
		}
		stable_sort(a, a+n, [](int x, int y) ->bool{
			return abs(x-k) < abs(y-k);
		});
		for(int x : a){
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
