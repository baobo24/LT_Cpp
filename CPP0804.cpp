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
	ifstream in("VANBAN.in");
	string tmp;
	set<string> s;
	while(in >> tmp){
		for(int i=0; i<tmp.size(); i++)
			tmp[i] = tolower(tmp[i]);
		s.insert(tmp);
	}
	for(auto it : s){
		cout << it << endl;
	}
	return 0;
}
