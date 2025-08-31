#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void vietthuong(string &s){
	foru(i, 0, s.size()-1){
		s[i] = tolower(s[i]);
	}
}
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		vietthuong(tmp);
		v.push_back(tmp);
	}
	cout << v[v.size()-1];
	foru(i, 0, v.size()-2){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
	return 0;
}
