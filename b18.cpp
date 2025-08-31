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
	cin.ignore();
	string s;
	while(t--){
		getline(cin, s);
		int sum = 0;
		stringstream ss(s);
		while(ss >> s){
			if(sum +s.size() <= 100){
				cout << s << ' ';
				sum += s.size() +1;
			}
			else break;
		}
		cout << endl;
	}
	return 0;
}
