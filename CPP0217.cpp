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
		int a[n][n];
		vector<int> v;
		foru(i, 0, n-1){
			foru(j, 0, n-1){
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(),v.end());
		cout << v[k-1] << endl;
	}
	return 0;
}
