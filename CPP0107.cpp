#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int a[15] = {65, 66, 66, 65, 68, 67, 67, 65, 66, 68, 67, 67, 65, 66, 68};
int b[15] = {65, 67, 67, 65, 66, 67, 68, 68, 66, 66, 67, 68, 68, 66, 66};
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n == 101){
			float sum = 0;
			foru(i, 0, 14){
				char c; cin >> c;
				if(c == a[i])
					sum += (10.0/15);				
			}
			cout << fixed << setprecision(2) << sum << endl;
		}
		else{
			float sum = 0;
			foru(i, 0, 14){
				char c; cin >> c;
				if(c == b[i])
					sum += (10.0/15);				
			}
			cout << fixed << setprecision(2) << sum << endl;
		}
	}
	return 0;
}
