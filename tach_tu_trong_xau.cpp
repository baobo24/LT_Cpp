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
	string s;
	cin >> s;
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(getline(ss, tmp, '.')){
		v.push_back(tmp);
	}
	for(int i=v.size()-1; i>=0; i--){
		if(i!=0) cout << v[i] << '.';
		else cout << v[i];
	}
	return 0;
}
