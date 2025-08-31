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
		int n, k; cin >> n >> k;
		vector<int> v(n);
		foru(i, 0, n-1)
			cin >> v[i];
		multiset<int> ms;
		for(int i=0; i<k; i++){
			ms.insert(v[i]);
		}
		for(int i=k; i<n; i++){
			cout << *ms.rbegin() << ' ';
			ms.erase(ms.find(v[i-k]));
			ms.insert(v[i]);
		}
		cout << *ms.rbegin() << endl;
	}
	return 0;
}
