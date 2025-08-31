#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second != b.second)
		return a.second > b.second;
	else
		return a.first < b.first;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		vector<pair<int, int>> v;
		foru(i, 0, n-1){
			cin >> a[i];
			mp[a[i]]++;
		}
		for(auto it : mp){
			v.push_back({it.first, it.second});
		}
		sort(v.begin(), v.end(), cmp);
		for(auto x : v){
			while(x.second--){
				cout << x.first << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
