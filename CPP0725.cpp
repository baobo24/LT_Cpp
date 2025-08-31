#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int a[1001][1001];
void sinh(){
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(j == 0 || j == i){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
				a[i][j] %= mod;
			}
		}
	}
}
int main(){
	sinh();
	int t;
	cin >> t;
	while(t--){
	int n, r;
		cin >> n >> r;
		cout << a[n][r] << endl;
	}	
	return 0;
}
