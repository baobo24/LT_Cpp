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
	int n; cin >> n;
	int a[n];
	foru(i, 0, n-1) cin >> a[i];
	sort(a, a+n);
	cout << a[0] << ' ';
	foru(i, 1, n-1){
		if(a[i] != a[i-1])
			cout << a[i] << ' ';
	}
	return 0;
}
