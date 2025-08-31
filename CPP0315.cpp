#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool check(string &s){
	int i=s.size()-1, j = s.size()-1;
	while(i >= 1 && s[i-1] <= s[i])
		i--;
	if(i == 0)
		return false;
	i--;
	while(s[i] <= s[j] || (s[j] == s[j-1] && s[j-1] < s[i]))
		j--;
	swap(s[i], s[j]);
	if(s[0] == '0')
		return false;
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)){
			cout << s;
		}
		else
			cout << -1;
		cout << endl;
	}
	return 0;
}
