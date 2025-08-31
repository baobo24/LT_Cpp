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
		int a, m; cin >> a >> m;
		bool kt = true;
		foru(i, 0, m-1){
			if((a*i) % m == 1){
				cout << i << endl;
				kt = false;
				break;
			}
		}
		if(kt) cout << -1 << endl;
	}
	return 0;
}
