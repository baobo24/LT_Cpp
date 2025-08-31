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
		int sum = 0, res = 0;
		for(int i=0; i<s.size(); i++){
			if(isdigit(s[i])){
				res = res*10 + (s[i] - '0');
			}
			if(isalpha(s[i]) || i == s.size()-1){
				sum += res;
				res = 0;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
