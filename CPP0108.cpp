#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
bool snt(int n){
	foru(i, 2, sqrt(n)){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
bool sotang(int n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(a <= n%10)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
bool sogiam(int n){
	int a = n%10; 
	n /= 10;
	while(n > 0){
		if(a >= n%10)
			return false;
		a = n%10;
		n /= 10;	
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dem = 0;
		int a = pow(10,n-1), b = pow(10,n) - 1;
		foru(i, a, b){
			if((sotang(i) || sogiam(i)) && snt(i))
				dem++;
		}
		cout << dem << endl;
	}
	return 0;
}
