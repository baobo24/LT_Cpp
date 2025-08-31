#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void phantich(int n, int k){
	int dem = 0;
	for(int i=2; i<=sqrt(n); i++){
		while( n%i==0 ){
			dem ++;
			if(dem == k){
				cout << i;
				break;
			}
			n /= i;
		}
		if(dem == k) break;	
	}
	if(n > 1 && dem < k) {
        dem++;
        if(dem == k) cout << n;
    }
	if(dem < k) cout << -1;
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		phantich(n ,k);
	}
	return 0;
}
