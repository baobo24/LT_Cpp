#include <bits/stdc++.h>
using namespace std;

bool sinh(int a[], int n){
	int i = n; //tim vi tri phan tu bang 0 dau tien tu phai sang
	while(i>=1 && a[i] == 1){ 
		i--;
	}
	a[i] = 1; //sinh ra cau hinh tiep theo
	for(int j=i+1; j<=n; j++){
		a[j] = 0;
	}
	//kiem tra xau vua sinh da phai cau hinh cuoi cung hay chua
	i = n;
	while(i>=1 && a[i] == 1){
		i--;
	}
	if(i == 0)
		return true; //da tim ra cau hinh cuoi cung
	else
		return false; // chua tim ra cau hinh cuoi cung
}
int main(){
	int n;
	cin >> n;
	int a[n];
	//thiet lap cau hinh dau tien
	for(int i=1; i<=n; i++){
		a[i] = 0;
	}
	bool check = false;
		//check = false: chua phai cau hinh cuoi cung
		//check = true: da la cau hinh cuoi cung
	while(!check){     // lap den khi chua phai cau hinh cuoi cung
		for(int i=1; i<=n; i++){
			cout << a[i];   //dua ra cau hinh hien tai
		}
		cout << endl;
		check = sinh(a, n); // sinh ra cau hinh ke tiep
	}
	for(int i=1; i<=n; i++){
		cout << a[i];   //dua ra cau hinh cuoi cung
	}
	return 0;
}
