#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct SinhVien{
    string ten, lop, ns;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
    getline(cin, a.ten);
    cin >>  a.lop;
    cin >> a.ns;
	cin >> a.gpa;
}
void inThongTinSV(SinhVien a){
	if(a.ns[1] == '/')
		a.ns = '0' + a.ns;
	if(a.ns[4] == '/')
		a.ns.insert(3, "0");
	cout << "N20DCCN001 " << a.ten << ' ' << a.lop << ' ' << a.ns << ' ';
	cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
