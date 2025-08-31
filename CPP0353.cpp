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
	foru(i, 0, s.size()-1){
		s[i] = tolower(s[i]);
	}
}
bool thuannghich(string s){
	string t = s;
	reverse(s.begin(), s.end());
	return s == t;
}
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		getline(cin, s);
		string tmp = "";
		inthuong(s);
		for(char x : s){
			if(x == 'a' || x == 'b' || x == 'c')
				tmp += "2";
			if(x == 'd' || x == 'e' || x == 'f')
				tmp += "3";
			if(x == 'g' || x == 'h' || x == 'i')
				tmp += "4";
			if(x == 'j' || x == 'k' || x == 'l')
				tmp += "5";
			if(x == 'm' || x == 'n' || x == 'o')
				tmp += "6";
			if(x == 'p' || x == 'q' || x == 'r' || x == 's')
				tmp += "7";
			if(x == 't' || x == 'u' || x == 'v')
				tmp += "8";
			if(x == 'w' || x == 'x' || x == 'y' || x == 'z')
				tmp += "9";
		}
		if(thuannghich(tmp))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
