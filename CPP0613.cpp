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
class SinhVien{
	private:
		string ten, lop, ns , msv;
		double gpa;
	public:
		SinhVien();
		double getgpa(){
			return this->gpa;		
		}
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien(){
}

istream& operator >> (istream &in, SinhVien &a){
	scanf("\n");
	a.msv = "B20DCCN" + string(3-to_string(dem).size(), '0') + to_string(dem);
	dem++;
	getline(in, a.ten);
    getline(in, a.lop);
    getline(in, a.ns);
	in >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	if(a.ns[1] == '/')
		a.ns = '0' + a.ns;
	if(a.ns[4] == '/')
		a.ns.insert(3, "0");
	for(int i=0; i<a.ten.size(); i++){
		a.ten[i] = tolower(a.ten[i]);
	}
	stringstream ss(a.ten);
	string tmp, res = "";
	while(ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		res += tmp + ' ';
	}
	res.pop_back();
	out << a.msv << ' ' << res << ' ' << a.lop << ' ' << a.ns << ' ';
	out << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

bool cmp(SinhVien a, SinhVien b){
	return a.getgpa() > b.getgpa();
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}