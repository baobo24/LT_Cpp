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
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
int main(){
	int n; cin >> n;
	if(snt(n))
		cout << "YES";
	else cout << "NO";
	return 0;
}
