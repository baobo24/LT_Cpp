#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool canbang(int n){
	int chan=0, le=0;
	while(n>0){
		int a = n%10;
		if(a%2 == 0)
			chan++;
		else le++;
		n /= 10;
	}
	if(chan == le) return true;
	return false;
}
int main(){
	int n; cin >> n;
	int dem=0;
	int a = pow(10, n-1), b = pow(10, n) - 1;
	foru(i, a, b){
		if(canbang(i)){
			cout << i << " ";
			dem++;
			if(dem%10 == 0) cout << endl;
		}
	}
	return 0;
}
