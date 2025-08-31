#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

string let(char s){
	if(isalpha(s)){
		if(isupper(s)){
			s = (s+'A'-2)%26 +'A';
		}
		else{				
			s= (s-'a'+2)%26 +'a';
		}
	}	
	return string(1, s);
}
string mes(const string &m){
	string tmp;
	for(char i:m){
		tmp += let(i);
	}
	return tmp;
}
int main(){
	string s;
	getline(cin, s);
	string tmp = mes(s);
	cout << tmp;
	return 0;
}
