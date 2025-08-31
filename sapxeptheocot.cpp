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
	int n;
	cin >> n;
	int a[n][n], b[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			b[j][i] = a[i][j];	
		}
	}
	for(int i=0; i<n; i++){
		sort(b[i], b[i]+n);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << b[j][i] << ' ';	
		}
		cout << endl;
	}
	return 0;
}
