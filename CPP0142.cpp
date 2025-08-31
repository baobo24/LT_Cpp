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
int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int t = 0;
		foru(i, 1, x){
			if(gcd(i, x) == 1)
				t++;
		}
		if(snt(t))
			cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
