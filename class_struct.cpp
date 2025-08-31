#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;
#define PI 3.141592653589793238

struct PhanSo{
	ll tu, mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
void in(PhanSo a){
	cout << a.tu << '/' << a.mau;
}
ll ucln(ll a, ll b){
	if(b == 0) return a;
	else return ucln(b, a%b);
}
ll bcnn(ll a, ll b){
	return a*b / ucln(a,b);
}
void rutgon(PhanSo &a){
	ll uc = ucln(abs(a.tu), abs(a.mau));
	a.tu /= uc;
	a.mau /= uc; 
}
PhanSo tong(PhanSo a, PhanSo b){
	PhanSo res;
	ll mc = bcnn(a.mau, b.mau);
	res.mau = mc;
	res.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
	rutgon(res);
	return res;
}
PhanSo binhphuong(PhanSo a){
	PhanSo res;
	res.tu = pow(a.tu, 2);
	res.mau = pow(a.mau, 2);
	rutgon(res);
	return res;
}
PhanSo nhan(PhanSo a, PhanSo b, PhanSo c){
	PhanSo res;
	res.tu = a.tu * b.tu * c.tu;
	res.mau = a.mau * b.mau * c.mau;
	rutgon(res);
	return res;
}
void process(PhanSo a, PhanSo b){
	PhanSo c = tong(a, b);
	c = binhphuong(c);
	PhanSo d = nhan(a, b, c);
	cout << c.tu << '/' << c.mau << ' ' << d.tu << '/' << d.mau << endl;
}
struct human{
    string ten, ns, ngay, thang , nam;
};
bool cmp(human a, human b){
	if(a.nam != b.nam)
		return a.nam < b.nam;
	else if(a.thang != b.thang)
		return a.thang < b.thang;
	return a.ngay < b.ngay;
}
PhanSo tong1(PhanSo a, PhanSo b){
	PhanSo res;
	ll mc = bcnn(a.mau, b.mau);
	res.mau = mc;
	res.tu = mc/a.mau * a.tu + mc/b.mau * b.tu;
	rutgon(res);
	return res;
}
struct thoigian{
    int gio, phut, giay;
};
bool cmptg(thoigian a, thoigian b){
	if(a.gio != b.gio)
		return a.gio < b.gio;
	else if(a.phut != b.phut)
		return a.phut < b.phut;
	return a.giay < b.giay;
}
struct diem{
	double x, y;
};
void nhapdiem(diem &a){
	cin >> a.x >> a.y;
}
struct Point{
	int x, y, z;
};
class Struct {
public:
	void CPP0503();
	void CPP0507();
    void CPP0512();
    void CPP0526();
    void CPP0527();
    void CPP0531();
    void CPP0532();
    void CPP0544();

    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
    void CPP0512();
};
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0526(){
	int n;
    cin >> n;
    human a[101];
    for(int i=0; i<n; i++){
    	cin >> a[i].ten >> a[i].ns;
    	a[i].ngay = a[i].ns.substr(0, 2);
    	a[i].thang = a[i].ns.substr(3, 2);
    	a[i].nam = a[i].ns.substr(6, 4);
	}
    sort(a, a+n, cmp);
	cout << a[n-1].ten << endl;
	cout << a[0].ten;
}
void Struct :: CPP0507(){
	PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong1(p,q);
	in(t);
}
void Struct :: CPP0503(){
	PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
}
void Struct :: CPP0527(){
	int n;
    cin >> n;
    thoigian a[5000];
    for(int i=0; i<n; i++){
    	cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
    sort(a, a+n, cmp);
	for(int i=0; i<n; i++){
		cout <<a[i].gio << ' ' << a[i].phut << ' ' << a[i].giay << endl;
	}
}
void Struct :: CPP0544(){
	struct diem a, b, c;
	nhapdiem(a); nhapdiem(b); nhapdiem(c);
	double c1 = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
	double c2 = sqrt((c.x-b.x)*(c.x-b.x) + (c.y-b.y)*(c.y-b.y));
	double c3 = sqrt((a.x-c.x)*(a.x-c.x) + (a.y-c.y)*(a.y-c.y));
	if(c1 <= 0 || c2 <= 0 || c3 <= 0 || c1+c2 <= c3 || c2+c3 <= c1 || c1+c3 <= c2){
		cout << "INVALID" << endl;
		return;
	}
	double s1 = sqrt((c1+c2+c3)*(c1+c2-c3)*(c2+c3-c1)*(c1+c3-c2)) / 4;
	double R = (c1*c2*c3) / (4*s1);
	double s2 = R*R*PI;
	cout << fixed << setprecision(3) << s2 << endl;
}
void Struct :: CPP0531(){
	Point a[4];
	Point v[3]; //khai bao 3 vector
	for(int i=0; i<4; i++){
		cin >> a[i].x >> a[i].y >> a[i].z;
	} 
	//v0 la vector a0a1
	v[0].x = a[1].x - a[0].x;
	v[0].y = a[1].y - a[0].y;
	v[0].z = a[1].z - a[0].z;
	//v1 la vector a0a2
	v[1].x = a[2].x - a[0].x;
	v[1].y = a[2].y - a[0].y;
	v[1].z = a[2].z - a[0].z;
	//v2 la vector a0a3
	v[2].x = a[3].x - a[0].x;
	v[2].y = a[3].y - a[0].y;
	v[2].z = a[3].z - a[0].z;
	Point n;     //n la VTPT cua mp a0a1a2
	n.x = v[0].y * v[1].z - v[0].z * v[1].y;
	n.y = v[0].z * v[1].x - v[0].x * v[1].z;
	n.z = v[0].x * v[1].y - v[0].y * v[1].x;
	if(v[2].x * n.x + v[2].y * n.y + v[2].z * n.z == 0)
		cout << "YES\n";
	else 
		cout << "NO\n";
}
void Struct :: CPP0532(){
	int n;
	cin >> n;
	diem a[1000];
	for(int i=0; i<n; i++){
		cin >>  a[i].x >> a[i].y;
	}
	a[n].x = a[0].x;
	a[n].y = a[0].y;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += (a[i].x * a[i+1].y - a[i].y * a[i+1].x);
	}
	cout << fixed << setprecision(3) << abs(sum) / 2.0 << endl;
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}
void Struct :: CPP0512(){
	PhanSo A;
	PhanSo B;
	cin >> A.tu >> A.mau >> B.tu >> B.mau;
	process(A, B);
}


int main(){
	Struct A;
	A.CPP0512();
	return 0;
}
