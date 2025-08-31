#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++)
			s[i] = tolower(s[i]);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string email = "";
		email += v[v.size()-1];
		for(int i=0; i<v.size()-1; i++){
			email += v[i][0];
		}
		mp[email]++;
		if(mp[email] == 1){
			cout << email << "@ptit.edu.vn"; 
		}
		else
			cout << email << mp[email] << "@ptit.edu.vn";
		cout << endl;
	}
	return 0;
}
