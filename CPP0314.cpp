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
	int n; cin >> n;
	cin.ignore();
	set<string> se;
	foru(i, 1, n){
		string x;
		getline(cin, x);
		se.insert(x);
	}
	cout << se.size();
	return 0;
}
