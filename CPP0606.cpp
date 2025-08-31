#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class NhanVien{
	private:
		string ten, gt, ns, dc, ma, ngayhd;
	public:
		NhanVien();
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};
NhanVien::NhanVien(){
}
istream& operator >> (istream &in, NhanVien &a){
	getline(in, a.ten );
    getline(in, a.gt);
    getline(in, a.ns);
    getline(in, a.dc);
    getline(in, a.ma);
    getline(in, a.ngayhd);
	return in;
}
ostream& operator << (ostream &out, NhanVien a){
	cout << "00001 " << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.ma << ' ' << a.ngayhd;
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
