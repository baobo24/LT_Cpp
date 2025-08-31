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
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		int Max = 0;
		for(char x : s){
			mp[x]++;
			Max = max(Max, mp[x]);
		}
		if(Max <= (s.size() - Max) + 1)
			cout << 1;
		else
			cout << 0;
		cout << endl;
	}
	return 0;
}
