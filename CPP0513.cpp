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
void nhap(SinhVien a[], int n){
    for(int i=0; i<n; i++){
    	cin.ignore();
		getline(cin, a[i].ten);
	    getline(cin, a[i].lop);
	    getline(cin, a[i].ns);
		cin >> a[i].gpa;
	}
}
void in(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		if(a[i].ns[1] == '/')
			a[i].ns = '0' + a[i].ns;
		if(a[i].ns[4] == '/')
			a[i].ns.insert(3, "0");
		string ma = to_string(i+1);
		while(ma.size() < 3){
			ma = "0" + ma;
		}
		ma = "B20DCCN" + ma;
		cout << ma << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << a[i].ns << ' ';
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
