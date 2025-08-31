#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void inthuong(string &s){
	for(int i=0; i< s.size(); i++)
		s[i] = tolower(s[i]);
}
int main(){
	string s;
	cin >> s;
	inthuong(s);
	for(auto x : s){
		if(x != 'u' && x != 'e' && x != 'o' && x != 'a' && x != 'i' && x != 'y')
			cout << '.' << x;
	}
	return 0;
}
