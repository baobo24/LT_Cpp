#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int dem = 1;
class NhanVien{
	private:
		string mnv, ten, gt, ns, dc, ma, ngayhd;
	public:
		NhanVien();
		bool operator < (NhanVien a);
		friend istream& operator >> (istream &in, NhanVien &a){
			in.ignore();
			a.mnv = string(5-to_string(dem).size(), '0') + to_string(dem);
			dem++;
			getline(in, a.ten );
		    getline(in, a.gt);
		    getline(in, a.ns);
		    if(a.ns[1] == '/')
				a.ns = '0' + a.ns;
			if(a.ns[4] == '/')
				a.ns.insert(3, "0");
		    getline(in, a.dc);
		    getline(in, a.ma);
		    in >> a.ngayhd;
			return in;
		}
		friend ostream& operator << (ostream &out, NhanVien a){
			out << a.mnv << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.ma << ' ' << a.ngayhd << endl;
			return out;
		}
};
NhanVien::NhanVien(){
}

bool NhanVien::operator < (NhanVien a){
	string m1 = this->ns.substr(0, 2);
	string m2 = a.ns.substr(0, 2);
	string d1 = this->ns.substr(3, 2);
	string d2 = a.ns.substr(3, 2);
	string y1 = this->ns.substr(6, 4);
	string y2 = a.ns.substr(6, 4);
	if(y1 != y2)
		return y1 < y2;
	if(m1 != m2)
		return m1 < m2;
	return d1 < d2;
}

void sapxep(NhanVien a[], int n){
	sort(a, a+n);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
