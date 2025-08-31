#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

bool check(string s){
	string t =s;
	reverse(t.begin(), t.end());
	return s == t;
}
int main(){
	ll n;
	cin >> n;
	ll a= pow(10, n-1), b = pow(10, n)-1, sum=0;
	for(ll i =a; i<=b; i++){
		string tmp = to_string(i);
		if(check(tmp)) sum += i;
	}
	cout << sum;
	return 0;
}
