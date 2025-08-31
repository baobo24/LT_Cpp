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
	ifstream in1("DATA1.in");
	ifstream in2("DATA2.in");
	string tmp;
	set<string> s;
	map<string, int> mp;
	while(in1 >> tmp){
		for(int i=0; i<tmp.size(); i++)
			tmp[i] = tolower(tmp[i]);
		s.insert(tmp);
		mp[tmp] = 1;	
	}
	while(in2 >> tmp){
		for(int i=0; i<tmp.size(); i++)
			tmp[i] = tolower(tmp[i]);
		s.insert(tmp);
		if(mp[tmp] == 1) mp[tmp] = 2;
	}
	for(auto it : s){
		cout << it << ' ';
	}
	cout << endl;
	for(auto it : mp){
		if(it.second == 2)
			cout << it.first << ' '; 
	}
	return 0;
}
