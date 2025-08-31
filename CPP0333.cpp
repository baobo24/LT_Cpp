#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void chuan(string &s){
	s[0] = toupper(s[0]);
	foru(i, 1, s.size()-1){
		s[i] = tolower(s[i]);
	}
}
void viethoa(string &s){
	foru(i, 0, s.size()-1){
		s[i] = toupper(s[i]);
	}
}
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		chuan(tmp);
		v.push_back(tmp);
	}
	foru(i, 0, v.size()-2){
		cout << v[i];
		if(i != v.size()-2)
			cout << ' ';
	}
	cout << ", ";
	viethoa(v[v.size()-1]);
	cout << v[v.size()-1];
	return 0;
}
