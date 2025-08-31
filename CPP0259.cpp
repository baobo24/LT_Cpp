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
	int n, m, p, i, j; 
	cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p];
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			cin >> b[i][j];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			c[i][j] = 0;
			for(int k=0; k<m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
