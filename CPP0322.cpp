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
	vector<int[5][5]> v;
	while(t--){
		string a, b, c = "";
		cin >> a >> b;
		if(a.size() < b.size())
			swap(a, b);
		for(int i=b.size(); i<a.size(); i++){
			b = '0' + b;
		}
		int tmp = 0;
		for(int i=a.size()-1; i>=0; i--){
			int res = (a[i] - '0') + (b[i] - '0') + tmp;
			if(res > 9){
				tmp = 1;
				c = to_string(res - 10) + c;
			}
			else{
				tmp = 0;
				c = to_string(res) + c;
			}
			
		}
		if(tmp > 0){
			c = to_string(tmp) + c;
		}
		cout << c << endl;
	}
	return 0;
}
