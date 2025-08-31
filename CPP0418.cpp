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
		int a[n], b[m];
		set<int> se;
		map<int, int> mp;
		foru(i, 0, n-1){
			cin >> a[i];
			se.insert(a[i]);
			mp[a[i]]++;
		}
		foru(i, 0, m-1){
			cin >> b[i];
			se.insert(b[i]);
		}
		for(int x : se){
			cout << x << ' ';
		}
		cout << endl;
		foru(i, 0, m-1){
			if(mp[b[i]] > 0)
				cout << b[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
