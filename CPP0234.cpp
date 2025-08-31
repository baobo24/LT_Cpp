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
		int n, m, i, j, k;
		cin >> n >> m >> k;
		int a[101][101];
		foru(i, 0, n-1){
			foru(j, 0, m-1){
				cin >> a[i][j];
			}
		}
		int b[10001], dem = 0;
		int h1=0, h2 = n - 1, c1=0, c2 = m - 1;
		while(h1 <= h2 && c1 <= c2){
			for(i=c1; i<=c2; i++){
				b[dem++] = a[h1][i];
			}
			h1++;
			for(i=h1; i<=h2; i++){
				b[dem++] = a[i][c2];
			}
			if(h1 <= h2){
				c2--;
				for(i=c2; i>=c1; i--){
					b[dem++] = a[h2][i];
				}
				h2--;
			}
			if(c1 <= c2){
				for(i=h2; i>=h1; i--){
				b[dem++] = a[i][c1];
				}
				c1++;
			}
		}
		cout << b[k-1] << endl;
	}
	return 0;
}
