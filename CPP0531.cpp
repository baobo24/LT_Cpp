#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

struct Point{
	int x, y, z;
};

int main(){
	int t;
	cin >> t;
	while(t--){
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
	return 0;
}
