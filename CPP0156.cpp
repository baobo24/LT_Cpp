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
	int t;
	cin >> t;
	while(t--){
		int b, p;
		cin >> b >> p;
		int dem = 0;
		for(int i = 1; i <= b; i++){
			if((i*i) % p == 1 % p) dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
