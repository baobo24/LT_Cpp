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
    string ten, lop, ns, msv;
	double gpa;
};
bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}
void inthuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
void nhap(SinhVien a[], int n){
    for(int i=0; i<n; i++){
    	cin.ignore();
    	a[i].msv = to_string(i+1);
		while(a[i].msv.size() < 3){
			a[i].msv = "0" + a[i].msv;
		}
		a[i].msv = "B20DCCN" + a[i].msv;
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
		inthuong(a[i].ten);
		stringstream ss(a[i].ten);
		string tmp, res = "";
		while(ss >> tmp){
			tmp[0] = toupper(tmp[0]);
			res += tmp + ' ';
		}
		res.pop_back();
		cout << a[i].msv << ' ' << res << ' ' << a[i].lop << ' ' << a[i].ns << ' ';
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
