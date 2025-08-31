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
		int n, m; cin >> n >> m;
		int a[101][101];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int b[101][101] = {0};
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j] == 1){
					for(int k=0; k<m; k++)
						b[i][k] = 1;
					for(int k=0; k<n; k++)
						b[k][j] = 1;		
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << b[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
