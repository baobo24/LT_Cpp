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
		PhanSo operator + (PhanSo a){
			PhanSo tong;
			tong.tu = this->tu  * a.mau + this->mau * a.tu;
			tong.mau = this->mau * a.mau;
			ll mc = __gcd(tong.tu, tong.mau);
			tong.tu /= mc;
			tong.mau  /= mc;
			return tong;
		}
};
istream &operator >> (istream &in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;

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
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}