#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int res = INT_MIN;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int sum = a[i][j];
				for(int k=0; k<8; k++){
					int i1 = i+dx[k], j1 = j+dy[k]; 
					if(i1>=0 && i1<n && j1>=0 && j1<m){
						sum += a[i1][j1];
					}
				}
				res = max(res, sum);
			}
		}
		cout << res << endl;
	}
	return 0;
}
