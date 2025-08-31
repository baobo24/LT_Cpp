#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[50][50];
int n, m;

void loang(int i, int j){
	a[i][j] = '*';
	for(int k=0; k<4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 <= n-1 && j1 >= 0 && j1 <= m - 1 && a[i1][j1] == 'O')
			loang(i1, j1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}	
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if((i == 0 || i == n-1 || j == 0 || j == m - 1) && a[i][j] == 'O')
					loang(i, j);
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j] == '*')
					cout << 'O' << ' ';
				else
					cout << 'X' << ' ';
			}
			cout << endl;	
		}
	} 
	return 0;
}
