#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int a[105][105], n, s, t, u, v;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
void loang(int i, int j){
    a[i][j] = 2;
    for(int k=0; k<8; k++){
        int i1 = i+dx[k], j1 = j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=n && (a[i1][j1]==1))
            loang(i1, j1);
    }
}
int main(){
	cin >> n >> s >> t >> u >> v;
	for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    if(a[s][t] == 1) loang(s, t);
    if(a[u][v] == 2) cout << "YES";
    else cout << "NO";
	return 0;
}
