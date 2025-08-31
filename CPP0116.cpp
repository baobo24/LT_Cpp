#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool snt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
int uocnt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0){
			return i;
		}
	}
	
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << 1 << ' ';
		foru(i, 2, n){
			if(snt(i)) cout << i << ' ';
			else if(i%2 == 0) cout << 2 << ' ';
			else cout << uocnt(i) << ' ';
		}
		cout << endl;
	}
	return 0;
}
