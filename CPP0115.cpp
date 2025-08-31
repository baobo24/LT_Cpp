#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
void phantich(int n){
	for(int i=2; i<=sqrt(n); i++){
		int dem = 0;
		while( n%i==0 ){
			dem ++;
			n /= i;
		}
		if(dem>0){
			cout << i << " " << dem << " ";
		}			
	}
	if(n!=1){
		cout << n << " " << 1;
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		phantich(n);
	}
	return 0;
}
