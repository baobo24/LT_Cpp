#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int tong(int n){
	if(n < 10) return n;
	int sum = 0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return tong(sum);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << tong(n) << endl;
	}
	return 0;
}
