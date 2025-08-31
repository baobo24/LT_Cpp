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
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int l=0, r=n-1, res = -1, dem = 0;
		while(l < r){
			if(a[l] <= a[r]){
				res = r-l;
				break;
			}
			else{
				if(dem%2 == 0) l++;
				else r--;
				dem++;
			}
		}
		cout << res << endl;
	}
	return 0;
}
