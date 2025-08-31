#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int demKH = 0, demMH = 0, demHD = 0;
class KhachHang;
class MatHang;
map<string, KhachHang> KH;
map<string, MatHang> MH;
class KhachHang{
private:
	string maKH, tenKH, gt, ns, diachi;
public:
	friend istream &operator  >> (istream &in, KhachHang &a){
		demKH++;
		a.maKH = "KH"+string(3-to_string(demKH).size(), '0')+to_string(demKH);
		if(demKH == 1) in.ignore();
		getline(in, a.tenKH);
		getline(in, a.gt);
		getline(in, a.ns);
		getline(in, a.diachi);
		KH[a.maKH] = a;
		return in;
	}
	string getTenKH(){
		return this->tenKH;
	}
	string getDiachi(){
		return this->diachi;
	}
};
class MatHang{
public:
	string maMH, tenMH, dv;
	int giamua, giaban;
public:
	friend istream &operator  >> (istream &in, MatHang &a){
		demMH++;
		a.maMH = "MH"+string(3-to_string(demMH).size(), '0')+to_string(demMH);
		in.ignore();
		getline(in, a.tenMH);
		getline(in, a.dv);
		in >> a.giamua >> a.giaban;
		MH[a.maMH] = a;
		return in;
	}
};
class HoaDon : public KhachHang, public MatHang{
private:
	string maHD, maKH, maMH;
	int soluong;
public:
	friend istream &operator  >> (istream &in, HoaDon &a){
		demHD++;
		a.maHD = "HD"+string(3-to_string(demHD).size(), '0')+to_string(demHD);
		in >> a.maKH >> a.maMH >> a.soluong;
		return in;
	}
	friend ostream &operator  << (ostream &out, HoaDon a){
		out<<a.maHD<<' '<<KH[a.maKH].getTenKH()<<' '<<KH[a.maKH].getDiachi()<<' '<<MH[a.maMH].tenMH<<' '<<MH[a.maMH].dv<<' '<<MH[a.maMH].giamua<<' '<<MH[a.maMH].giaban<<' '<<a.soluong*MH[a.maMH].giaban<<endl;
		return out;
	}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}