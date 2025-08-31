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
		int n, i, j;
		cin >> n;
		char a[n][n], b[n][n];
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		}
		int res = 0, tmp = n;
		int h1=0, h2 = n - 1, c1=0, c2 = n - 1;
		while(tmp--){
			while(h1 < h2 && c1 < c2){
				for(i=c1; i<=c2; i++){	
					a[h1][i] = b[n-1-i][c1];
				}
				h1++;
				for(i=h1; i<=h2; i++){
					a[i][c2] = b[h1][i];
				}
				c2--;
				if(h1 <= h2){	
					for(i=c2; i>=c1; i--){
						a[h2][i] = b[n-1-i][c2];
					}
					h2--;
				}
				if(c1 <= c2){
					for(i=h2; i>=h1; i--){
						a[i][c1] = b[h2][i];
					}
					c1++;
				}
			}
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
//				if(a[i][j] != b[i][j]){
//					res += (int)a[i][j] - (int)b[i][j];
//				}
				cout << a[i][j];
			}
			cout<<endl;
		}
		cout << res << endl;
	}
	return 0;
}
