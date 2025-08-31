#include<bits/stdc++.h>
using namespace std;

int k, n, X[100], dem = 0;
bool cot[100], nguoc[100], xuoi[100];
vector< vector<vector<int>> > v; //vector v dung de luu cac cau hinh duoc sinh ra

void luucauhinh() {
	vector<vector<int>> v1;
	for(int i = 1; i <= n; i++) {
		vector<int> v2;
		for(int j = 1; j <= n; j++) {
			if(X[i] == j) // cho dat quan hau
				v2.push_back(1);
			else 
				v2.push_back(0);
		}
		v1.push_back(v2);
	}
	v.push_back(v1);
}
void inketqua(){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++) {
			for(int k = 0; k < v[i][j].size(); k++) {
				cout << v[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << "---------------" << endl;
	}																				
}
void Try(int i) {
	for(int j = 1; j <= n; j++) { 
		// ktra con hau co trung cot, dg cheo xuoi, dg cheo nguoc voi con hau khac hay ko 
		if(cot[j] == false && xuoi[i - j + n] == false && nguoc[i + j - 1] == false) { 
			X[i] = j; // cot dat quan hau
			cot[j] = true; // danh dau cot da bi chiem cho
			xuoi[i - j + n] = true; // danh dau duong cheo xuoi da bi chiem cho
			nguoc[i + j - 1] = true; // danh dau duong cheo nguoc da bi chiem cho
			if(i == n){
				dem++;
				luucauhinh();
			}				
			else  
				Try(i + 1);
			// tra lai gia tri
			cot[j] = false; 
			xuoi[i - j + n] = false;
			nguoc[i + j - 1] = false; 
		}
	}
}
int main() {
	cout << "Nhap vao kich co ban co: n = ";
	cin >> n;
	memset(cot, false, sizeof(cot)); 
	memset(xuoi, false, sizeof(xuoi));
	memset(nguoc, false, sizeof(nguoc));
	Try(1);
	cout << "So cau hinh thoa man la: " << dem << endl;
	inketqua();
	return 0;
}
