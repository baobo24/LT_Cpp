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
    string ten, lop, msv, email, cty;
    int stt;
};

void nhap(SinhVien a[], int n){   
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].ten);
	    getline(cin, a[i].lop);  
		cin >> a[i].email;
	}
}
void in(SinhVien a){
	cout << ' ' << a.msv << ' ' << a.ten << ' ' << a.lop << ' ';
	cout << a.email << endl;
}
int main(){
	struct SinhVien ds[1001];
    int n;
    cin >> n;
    nhap(ds, n);
    int q; cin >> q;
    while(q--){
    	string s;
    	cin >> s;
    	cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
    	for(int i=0; i<n; i++){
			if(ds[i].lop == s)
				in(ds[i]);
		}
	}
	return 0;
}
