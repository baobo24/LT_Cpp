#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
int n, m;
int a[101][101];

void loang(int i, int j){
		a[i][j] = 0;
		for(int k=0; k<8; k++){
			int i1 = i + dx[k], j1 = j + dy[k];
			if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1] == 1){
				loang(i1, j1);
			}
		}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		foru(i, 0, n-1){
			foru(j, 0, m-1){
				cin >> a[i][j];
			}
		}
		int dem = 0;
		foru(i, 0, n-1){
			foru(j, 0, m-1){
				if(a[i][j] == 1){
					dem++;
					loang(i, j);
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}
