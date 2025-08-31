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
	int i=0;
	string fi ="", se="";
	for(;i<s.size(); i++){
		if(isblank(s[i])) return 0;
		if(s[i] == '@') break;
		if(!isalnum(s[i]) && s[i]!='.' && s[i] !='_') return 0;
		fi += s[i];
		if(fi.size() > 64) return 0;
	}
	if(!fi.size()) return 0;
	i++;
	int ktra = 0;
	for(;i<s.size(); i++){
		if(isblank(s[i])) return 0;
		if(!isalnum(s[i]) && s[i]!='.' && s[i] !='_') return 0;
		if(s[i] == '.') ktra++;
		se += s[i];
		if(se.size() > 254) return 0;
	}
	if(ktra == 1 && se.size() && se[se.size()-1] == '.') return 0;
	return se.size() && ktra;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		getline(cin, s);
		if(check(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
