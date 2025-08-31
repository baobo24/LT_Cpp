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
	ll sum = 0;
	for(int i=0; i<s.size(); i++)
		sum += s[i] - '0';
	if(sum > 0 && sum%9 == 0)
		return true;
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}
