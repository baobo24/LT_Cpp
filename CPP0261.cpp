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
	int n, m, i, j;
	cin >> n;
	int a[101][101];
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cin >> a[i][j];
		}
	}
	cin >> m;
	int b[101][101];
	foru(i, 0, m-1){
		foru(j, 0, m-1){
			cin >> b[i][j];
		}
	}
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cout << a[i][j] * b[i%m][j%m] << ' ';
		}
		cout << endl;
	}
	return 0;
}
