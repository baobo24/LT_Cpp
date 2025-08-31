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
		int dem = 0;
		foru(i, 0, s.size()-1){
			foru(j, i, s.size()-1){
				if(s[i] == s[j])
					dem++;
			}
		}
		cout << dem << endl;
	}
	return 0;
}
