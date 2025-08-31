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
		set<char> se;
		bool check = true;
		if(s[0] == '0')
			check = false;		
		for(char x : s){
			if(isalpha(x)){
				check = false;
				break;
			}
			else
				se.insert(x);
		}
		if(!check){
			cout << "INVALID" << endl;
			continue;
		}
		if(se.size() == 10)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
