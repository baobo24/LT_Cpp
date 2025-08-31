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
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		if(n == 1){
			cout << 0 << endl;
			continue;
		}
		int res = 0;
		int tmp = *max_element(a, a+n);
		for(int i=1; i<=tmp; i++){
			bool check = true;
			for(int j=0; j<n-1; j++){
				if(a[j]%i != a[j+1]%i){
					check = false;
					break;
				}
			}
			if(check){
				res++;
			}
		}
		cout << res << endl;
	}
	return 0;
}
