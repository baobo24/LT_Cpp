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
	void nhap(){
		getline(cin, ten);
	    getline(cin, lop);
	    getline(cin, ns);
		cin >> gpa;
	}
	void xuat(){
		if(ns[1] == '/')
			ns = '0' + ns;
		if(ns[4] == '/')
			ns.insert(3, "0");
		cout << "B20DCCN001 " << ten << ' ' << lop << ' ' << ns << ' ';
		cout << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
