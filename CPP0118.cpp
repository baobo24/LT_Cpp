#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool sphenic(int n){
	int dem = 0;
	foru(i, 2, sqrt(n)){
		if(n%i == 0){
			int dem1 = 0;
			while(n%i == 0){
				dem1++;
				if(dem1 > 1) return false;
				n /= i;
			}
			dem++;
			if(dem > 3) return false;
		}
	}
	if(n > 1)
		dem++;
	if(dem == 3)
		return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(sphenic(n))
			cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
