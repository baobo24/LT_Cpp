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
		vector<char> v;
		int sum = 0;
		for(int i=0; i<s.size(); i++){
			if(isalpha(s[i])){
				v.push_back(s[i]);
			}
			else
				sum += s[i] - '0';
		}
		sort(v.begin(), v.end());
		for(char x : v){
			cout << x;
		}
		cout << sum << endl;
	}
	return 0;
}
