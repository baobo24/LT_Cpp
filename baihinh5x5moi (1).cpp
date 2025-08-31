#include<bits/stdc++.h>
using namespace std;
bool p[100000];
void sang() { // ham kiem tra so nguyen to
	for(int i = 2; i < 100000; i++)
		p[i] = true;
	for(int i = 2; i < sqrt(100000); i++) {
		if(p[i]) {
			for(int j = i * i; j < 100000; j += i)
				p[j] = false;
		}
	}
}
int tcs(int n) { // ham tinh tong chu so
	int tong = 0;
	while(n) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}
int check0(int n) { // ham check so 0
	while(n) {
		if(n % 10 == 0)
			return 0;
		n /= 10;
	}
	return 1;
}
void hang(int x, int a[][5], int i) { // dien hang 
	for(int j = 4; j >= 0; j--) {
		a[i][j] = x % 10;
		x /= 10;
	}
}
void cot(int x, int a[][5], int j) { // dien cot
	for(int i = 4; i >= 0; i--) {
		a[i][j] = x % 10;
		x /= 10;
	}
}

vector< vector<vector<int>> > v; //vector v dung de luu cac cau hinh duoc sinh ra
void inketqua(){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++) {
			for(int k = 0; k < v[i][j].size(); k++) {
				cout << v[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << "---------" << endl;
	}																				
}

int main() {
	sang();
	int s;
	cout << "Nhap tong: s = ";
	cin >> s;
	int n = 0;
	int so[100000];
	for(int i = 10001; i < 100000; i++) { // tao mang thoa man dieu kien
		if(p[i] && tcs(i) == s) {
			so[n] = i;
			n++;
		}
	}
	int a[5][5], dem=0;
	for(int i = 0; i < n; i++) { // dien o 1, 2, 3, 4, 5
		if(check0(so[i])) {
			hang(so[i], a, 0);
			for(int i0 = 0; i0 < n; i0++) { // dien o 6, 7, 8, 9
				if(check0(so[i0]) && so[i0]/10000 == a[0][0]) {
					cot(so[i0], a, 0);
					for(int i1 = 0; i1 < n; i1++) {
						if(so[i1]%10 == a[4][0] && so[i1]/10000 == a[0][4]) { // dien o 10, 11, 12
							int tmp = so[i1];
							for(int j = 4; j >= 0; j--) {
								a[j][4-j] = tmp % 10;
								tmp /= 10;
							}
							for(int i2 = 0; i2 < n; i2++) { // dien o 13, 14, 15
								if(so[i2]/10000 == a[1][0] && so[i2]/10%10 == a[1][3]) {
									hang(so[i2], a, 1);
									for(int i3 = 0; i3 < n; i3++) { // dien o 16, 17
										if(so[i3]/10000 == a[0][1] && so[i3]/1000%10 == a[1][1] && so[i3]/10%10 == a[3][1]) {
											cot(so[i3], a, 1);
											for(int i4 = 0; i4 < n; i4++) { // dien o 18, 19
												if(so[i4]/10000 == a[2][0] && so[i4]/1000%10 == a[2][1] && so[i4]/100%10 == a[2][2]) {
													hang(so[i4], a, 2);
													for(int i5 = 0; i5 < n; i5++) { // dien o 20, 21
														if(so[i5]/10000 == a[0][2] && so[i5]/1000%10 == a[1][2] && so[i5]/100%10 == a[2][2]) {
															cot(so[i5], a, 2);
															for(int i6 = 0; i6 < n; i6++) { // dien o 22, 23
																if(so[i6]/10000 == a[3][0] && so[i6]/1000%10 == a[3][1] && so[i6]/100%10 == a[3][2]) {
																	hang(so[i6], a, 3);
																	for(int i7 = 0; i7 < n; i7++) { // dien o 24, 25
																		if(so[i7]/10000 == a[4][0] && so[i7]/1000%10 == a[4][1] && so[i7]/100%10 == a[4][2]) {
																			hang(so[i7], a, 4);
																			int cheo1 = 0, cot5 = 0, cot4 = 0; // kiem tra cheo chinh, cot 5, cot 4
																			for(int b = 0; b < 5; b++) {
																				cheo1 = cheo1 * 10 + a[b][b];
																				cot5 = cot5 * 10 + a[b][4];
																				cot4 = cot4 * 10 + a[b][3];
																			}
																			if(p[cheo1] && tcs(cheo1) == s && p[cot5] && tcs(cot5) == s && p[cot4] && tcs(cot4) == s){
																				dem++;
																				vector<vector<int>> v1; 
																				for(int i8 = 0; i8 < 5; i8++){
																					vector<int> v2;
																			        for(int i9 = 0; i9 < 5; i9++){
																			            v2.push_back(a[i8][i9]);
																			        }
																			        v1.push_back(v2);// luu vector v2 vao vector v1
																			    }
																			    v.push_back(v1); //luu vector v1 vao vector v
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					} 
				}
			}
		}
	}
	cout << "So cau hinh thoa man la: " << dem << endl;
	inketqua();
	return 0;
}
