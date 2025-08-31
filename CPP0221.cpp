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
		int n, m, i, j;
		cin >> n >> m;
		int a[n][m];
		foru(i, 0, n-1){
			foru(j, 0, m-1){
				cin >> a[i][j];
			}
		}
		int h1=0, h2 = n - 1, c1=0, c2 = m - 1;
		while(h1 < h2 && c1 < c2){
			int tmp = a[h1+1][c1];
			for(i=c1; i<=c2; i++){
				int res = a[h1][i];
				a[h1][i] = tmp;
				tmp = res;
			}
			h1++;
			for(i=h1; i<=h2; i++){
				int res = a[i][c2];
				a[i][c2] = tmp;
				tmp = res;
			}
			c2--;
			if(h1 <= h2){	
				for(i=c2; i>=c1; i--){
					int res = a[h2][i];
					a[h2][i] = tmp;
					tmp = res;
				}
				h2--;
			}
			if(c1 <= c2){
				for(i=h2; i>=h1; i--){
					int res = a[i][c1];
					a[i][c1] = tmp;
					tmp = res;
				}
				c1++;
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				cout << a[i][j] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}