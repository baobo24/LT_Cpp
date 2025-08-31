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
		bool check = true;
		if(s[0] == '-'){
			for(int i=1; i<s.size(); i++){
				if(s[i]%2 == 0 && i%2 == 1) check = false;
				else if(s[i]%2 == 1 && i%2 == 0) check = false; 
			}
		}
		else{
			for(int i=0; i<s.size(); i++){
				if(s[i]%2 == 0 && i%2 == 0) check = false;
				else if(s[i]%2 == 1 && i%2 == 1) check = false; 
			}
		}
		if(check) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
