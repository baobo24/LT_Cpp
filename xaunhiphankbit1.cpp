#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], final = 0;
void sinh() {
	int i = n;
	while(i >= 1 && a[i] == 1) { //tim vi tri phan tu bang 0 dau tien tu phai sang
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
bool check(){ //check xau co duy nhat day k bit 1
	int dem = 0;
	for(int i = 1; i <= n; i++){ 
		if(a[i] == 1) dem++;
	}
	if(dem == k) return true; // Tra ve true neu chi co duy nhat mot day k bit 1
	return false;
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
int main(){
	cin >> n >> k;
	while(!final){
		if(check()){
	 		for(int i = 1; i <= n; i++){
				cout << a[i];
			}
			cout << endl;
		}		
		sinh(); // sinh ra cau hinh ke tiep
	}
	return 0;
}
