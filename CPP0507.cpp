#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct PhanSo{
    ll tu, mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
void in(PhanSo a){
	cout << a.tu << '/' << a.mau;
}
ll ucln(ll a, ll b){
	if(b == 0) return a;
	else return ucln(b, a%b);
}
ll bcnn(ll a, ll b){
	return a*b / ucln(a,b);
}
void rutgon(PhanSo &a){
	ll uc = ucln(abs(a.tu), abs(a.mau));
	a.tu /= uc;
	a.mau /= uc; 
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo res;
	ll mc = bcnn(a.mau, b.mau);
	res.mau = mc;
	res.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
	rutgon(res);
	return res;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
