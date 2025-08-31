#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
struct ThiSinh{
    string ten, ngaysinh;
	double x, y, z, tong;
};
void nhap(ThiSinh &a){
    getline(cin, a.ten);
    getline(cin, a.ngaysinh);
	cin >> a.x >> a.y >> a.z;
	a.tong = a.x + a.y + a.z;
}
void in(ThiSinh a){
	cout << a.ten << ' ' << a.ngaysinh << ' ';
	cout << fixed << setprecision(1) << a.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
