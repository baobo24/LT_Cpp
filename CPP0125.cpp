#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
int prime[100005];
void sang(){
	prime[0] = prime[1] = 0;
	foru(i, 2, 100005){
		prime[i] = 1;
	}
	foru(i, 2, sqrt(100005)){
		if(prime[i] == 1){
			for(int j=i*i; j<=100005; j+=i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int a; cin >> a;
		foru(i,2 ,a){
			if(prime[i] == 1)
				cout << i << ' ';
		}
		cout << endl;
	}
	return 0;
}