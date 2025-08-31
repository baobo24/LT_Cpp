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
		string s;
		cin >> s;
		ll res = 1, sum = 0;
		for(ll i=s.size()-1; i>=0; i--){
			if(s[i] == '1'){
				sum += (s[i] - '0') * res;
				sum %= 10;
			}
			res *= 2;
			res %= 10;
		}
		if(sum % 5 == 0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
