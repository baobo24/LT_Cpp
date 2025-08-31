#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;


ll f[1005];
void fibo(){
	f[1] = f[2] = 1;
	for(int i=3; i<=1000; i++){
		f[i] = f[i-1] + f[i-2];
		f[i] %= mod;
	}
}
int main(){
	fibo();
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}
