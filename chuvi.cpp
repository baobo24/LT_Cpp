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
int n, m, res;
int a[1005][1005], b[1005][1005];

void loang(int i, int j){
    a[i][j] = 0;
    int dem=0;
    for(int k=0; k<4; k++){
        int i1 = i+dx[k], j1 = j+dy[k];
        if(i1>=1 && i1<=n && j1 >=1 && j1<=m && b[i1][j1])
            dem++;
    }
    for(int k=0; k<4; k++){
        int i1 = i+dx[k], j1 = j+dy[k];
        if(i1>=1 && i1<=n && j1 >=1 && j1<=m && a[i1][j1])
            loang(i1, j1);
    }
    res += 4 - dem;
}
int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j]){
                res = 0;
                loang(i, j);
                cout << res << ' ';
            }
        }
    }
    return 0;
}
