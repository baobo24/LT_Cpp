#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct nv{
	string name, chucvu;
	ll luong, ngaycong, thuong, phucap;	
};
ll Thuong(ll n, ll x){
	if(n<22) return 0;
	if(n<25) return x*10/100;
	return x*20/100;
}
ll Phucap(string s){
	if(s =="GD") return 250000;
	if(s =="PGD") return 200000;
	if(s =="NV") return 150000;
	return 180000;
}
int main(){
	nv a;
	getline(cin, a.name);
	cin >> a.luong>>a.ngaycong>>a.chucvu;
	a.luong *= a.ngaycong;
	a.thuong= Thuong(a.ngaycong, a.luong);
	a.phucap=Phucap(a.chucvu);
	cout <<"NV01 "<<a.name<<' '<<a.luong<<' '<<a.thuong<<' '<<a.phucap<<' '<<a.luong+a.thuong+a.phucap;
	return 0;
}
