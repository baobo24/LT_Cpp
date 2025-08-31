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
	int a[n][3];
	int kq = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		int dem = 0;
		for(int j=0; j<3; j++){
			if(a[i][j] == 1)
				dem++;
		}
		if(dem >= 2)
			kq++;
	}
	cout << kq;
	return 0;
}
