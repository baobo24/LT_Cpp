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
	ifstream in("DATA.in");
	int tmp;
	map<int, int> mp;
	while(in >> tmp){
		mp[tmp]++;
	}
	for(auto it : mp){
		cout << it.first << ' ' << it.second << endl;
	}
	return 0;
}
