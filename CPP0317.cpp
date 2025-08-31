#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool thuannghich(string s){
	int l = 0, r = s.size()-1;
	while(l <= r){
		if(s[l]%2 != 0 || s[r]%2 != 0 || s[l] != s[r])
			return false;
		l++; r--;
	}
	return true;
}
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		getline(cin, s);
		if(thuannghich(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
