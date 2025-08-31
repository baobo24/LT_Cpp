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
	int n, m;
	cin >> n >> m;
	multiset<int> ms;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		ms.insert(x);
	}
	for(int i=0; i<m; i++){
		int x; cin >> x;
		auto it = ms.upper_bound(x);
		if(it == ms.begin()) cout << -1 << endl;
		else{
			it--;
			cout << *it << endl;
			ms.erase(it);
		}	
	}
	return 0;
}
