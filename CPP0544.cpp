#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
#define PI 3.141592653589793238
const int mod = 1e9 + 7;

struct diem{
	double x, y;
};
void nhap(diem &a){
	cin >> a.x >> a.y;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		struct diem a, b, c;
		nhap(a); nhap(b); nhap(c);
		double c1 = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
		double c2 = sqrt((c.x-b.x)*(c.x-b.x) + (c.y-b.y)*(c.y-b.y));
		double c3 = sqrt((a.x-c.x)*(a.x-c.x) + (a.y-c.y)*(a.y-c.y));
		if(c1 <= 0 || c2 <= 0 || c3 <= 0 || c1+c2 <= c3 || c2+c3 <= c1 || c1+c3 <= c2){
			cout << "INVALID" << endl;
			continue;
		}
		double s1 = sqrt((c1+c2+c3)*(c1+c2-c3)*(c2+c3-c1)*(c1+c3-c2)) / 4;
		double R = (c1*c2*c3) / (4*s1);
		double s2 = R*R*PI;
		cout << fixed << setprecision(3) << s2 << endl;
	}
	return 0;
}
