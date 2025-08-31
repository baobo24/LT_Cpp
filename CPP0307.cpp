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
	cin.ignore(1);
	while(t--){
		string s1, s2;
		map<string, int> mp;
		getline(cin, s1);
		stringstream ss(s1);
		string tmp;
		while(ss >> tmp){
			mp[tmp] = 1;
		}
		getline(cin, s2);
		stringstream ss2(s2);
		while(ss2 >> tmp){
			mp[tmp] = 0;
		}
		for(auto x : mp){
			if(x.second == 1)
				cout << x.first << ' ';
		}
		cout << endl;
	}
	return 0;
}
