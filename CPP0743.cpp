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
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		reverse(v.begin(), v.end());
		for(auto x : v){
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
