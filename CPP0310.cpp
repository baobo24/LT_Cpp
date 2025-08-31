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
		string a, b;
		cin >> a >> b;
		foru(i, 0, a.size()){
			if(a[i] == '6') a[i] = '5';
		}
		foru(i, 0, b.size()){
			if(b[i] == '6') b[i] = '5';
		}
		cout << stoll(a) + stoll(b) << ' ';
		foru(i, 0, a.size()){
			if(a[i] == '5') a[i] = '6';
		}
		foru(i, 0, b.size()){
			if(b[i] == '5') b[i] = '6';
		}
		cout << stoll(a) + stoll(b) << endl;
	}
	return 0;
}
