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
	int t; cin >> t;
	while(t--){
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		double x = abs(a-c), y = abs(b-d);
		double kq = sqrt(pow(x, 2) + pow(y, 2));
		cout << fixed << setprecision(4) << kq << endl;
	}
	return 0;
}
