#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo();
		PhanSo(ll, ll);
		friend istream &operator >> (istream &in, PhanSo &a);
		friend ostream &operator << (ostream &out, PhanSo a);
		void rutgon();
};
void PhanSo::rutgon(){
	ll mc = __gcd(tu, mau);
	tu /= mc;
	mau /= mc;
}
istream &operator >> (istream &in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}
ostream &operator << (ostream &out, PhanSo a){
	out << a.tu << '/' << a.mau;
	return out;
}
PhanSo::PhanSo(){
}
PhanSo::PhanSo(ll tu, ll mau){
	this->tu = tu;
	this->mau = mau;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}