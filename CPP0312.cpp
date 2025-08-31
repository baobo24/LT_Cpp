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
		int k; cin >> k;
		cin.ignore(1);
		map<char, int> mp;
		for(char x : s){
			mp[x] = 1;
		}
		int dem = 0;
		for(auto x : mp){
			if(x.second == 1)
				dem++;
		}
		if(26 - dem <= k)
			cout << 1;
		else
			cout << 0;
		cout << endl;
	}
	return 0;
}
