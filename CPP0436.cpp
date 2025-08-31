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
		int n;
		cin >> n;
		int a[n], maxx = INT_MIN;
		vector<int> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			v.push_back(a[i]);
			maxx = max(maxx, a[i]);
		}
		sort(v.begin(), v.end());
		for(int i=0; i<n; i++){
			if(a[i] == maxx){
				cout << '_' << ' ';
				continue;
			}
			auto res = upper_bound(v.begin(), v.end(), a[i]);
			cout << *res << ' ';
		}
		cout << endl;
	}
	return 0;
}
