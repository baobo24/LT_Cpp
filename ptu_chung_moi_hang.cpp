#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main() {
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(isalpha(s[i])){
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string tmp;
	ll kq = -1e9;
	while(ss>> tmp){
		ll x = stoll(tmp);
		kq = max(kq, x);
	}
	cout << kq;
    return 0;
}
