#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

class SinhVien{
	private:
		string ten, lop, ns , msv;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};
SinhVien::SinhVien(){
}
istream& operator >> (istream &in, SinhVien &a){
	in.ignore();
	getline(in, a.ten );
    getline(in, a.lop);
    getline(in, a.ns);
	in >> a.gpa;
	return in;
}
int dem = 1;
ostream& operator << (ostream &out, SinhVien a){
	if(a.ns[1] == '/')
		a.ns = '0' + a.ns;
	if(a.ns[4] == '/')
		a.ns.insert(3, "0");
	a.msv = "B20DCCN" + string(3-to_string(dem).size(), '0') + to_string(dem);
	dem++;
	cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ';
	cout << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
