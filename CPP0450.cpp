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
		bool check = false;
		int kq = -1;
		map<int, int> mp; 
		foru(i, 0, n-1){
			int x; cin >> x;
			mp[x]++;
			if(mp[x] >= 2 && !check){
				kq = x;
				check = true;
			}
		}
		cout << kq << endl;
	}
	return 0;
}
