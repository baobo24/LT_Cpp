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
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int dem = 0;
		foru(i, m, n){
			if(i%a == 0 || i%b == 0)
				dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
