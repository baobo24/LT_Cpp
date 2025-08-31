#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool thuannghich(string s){
	if(s.size() == 1)
		return false;
	string t = s;
	reverse(t.begin(), t.end());
	return t == s;
}
bool cmp(string a, string b){
	if(a.size() != b.size())
		return a.size() > b.size();
	else
		return a > b;
}
int main(){
	string s;
	vector<string> v;
	map<string, int> mp;
	stringstream ss(s);
	string tmp;
	while(cin >> s){
		if(thuannghich(s)){
			mp[s]++;
		}
	}
	for(auto it : mp){
		if(it.second > 0)
			v.push_back(it.first);
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<v.size(); i++){
		cout << v[i] << ' ' << mp[v[i]] << endl;		
	}
	return 0;
}
