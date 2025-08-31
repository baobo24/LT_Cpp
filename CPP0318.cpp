#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool check(string s){
	if(s[5]<s[6] && s[6]<s[7] && s[7]<s[9] && s[9]<s[10])
		return true;
	if(s[5]==s[6] && s[6]==s[7] && s[7]==s[9] && s[9]==s[10])
		return true;
	if(s[5]==s[6] && s[6]==s[7] && s[9]==s[10])
		return true;
	for(int i=5; i<=10; i++){
		if(i != 8){
			if(s[i] != '6' && s[i] != '8')
				return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
