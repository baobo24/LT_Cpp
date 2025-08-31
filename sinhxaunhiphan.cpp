#include<bits/stdc++.h>
using namespace std;
int n, a[100], final = 0;
void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if(i == 0) {
		final = 1; // check cau hinh cuoi cung
	}
	else {
		a[i] = 1;
	}
}
vector<vector<int>> v;
void inketqua(){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++){
			cout << v[i][j];
		}
		cout << endl;
	}  
}
int dem = 0;
int main() {
	cout << "Nhap vao do dai xau nhi phan: ";
	cin >> n;
	for(int i = 1; i <= n; i++) {
		a[i] = 0;
	}
	while(!final) {
		vector<int> v1;
		for(int i=1; i<=n; i++){// cau hinh hien tai
			v1.push_back(a[i]);
		}
		v.push_back(v1);
		dem++;
		sinh(); // sinh ra cau hinh ke tiep
	}
	cout << "So cau hinh thoa man la: " << dem << endl;
	inketqua();
	return 0;
}