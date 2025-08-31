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
		stringstream ss(s);
		string tmp;
		int dem = 0, chan = 0, le = 0;
		while(ss >> tmp){
			if(tmp[tmp.size()-1] % 2 == 0)
				chan++;
			else
				le++;
			dem++;
		}
		if((dem%2 == 0 && chan > le) || (dem%2 == 1 && le > chan))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
