#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct NhanVien{
    string ten, gt, ns, dc, ms, ngayhd;
};
void nhap(NhanVien &a){
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
	getline(cin, a.dc);
	getline(cin, a.ms);
	getline(cin, a.ngayhd);
}
void in(NhanVien a){
	cout << "00001 " << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.ms << ' ' << a.ngayhd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
