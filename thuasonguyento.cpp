#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

vector<pair<ll, ll>> v;
void phantich(ll n){
	for(ll i=2; i<=sqrt(n); i++){
		ll dem = 0;
		while(n%i == 0){
			n /= i;
			dem++;
		}
		if(dem>0) v.push_back(make_pair(i, dem));
	}
	if(n > 1) v.push_back(make_pair(n, 1));
}
bool cmp(pair<ll, ll> a, pair<ll, ll> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	else return a.first < b.first;
}
int main(){
	ll n;
	cin >> n;
	phantich(n);
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first << ' ' << v[0].second;
	return 0;
}
