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
	while(t--){
		string c; cin >> c;
		int a = c.length()-3;
		foru(i, 0, a){
			if(c[i] == '0' && c[i+1] == '8' && c[i+2] == '4'){
				c[i] = c[i+1] = c[i+2] = ' ';
				break;
			}
		}
		foru(i, 0, c.length()-1){
			if(c[i] != ' ')
				cout << c[i];
		}
		cout << endl;
	}
	return 0;
}
