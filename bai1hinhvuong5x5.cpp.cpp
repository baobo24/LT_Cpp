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
int main() {
	sang();
	srand((int)time(0));
	int s;
	do {
		cout << "Nhap tong: s = ";
		cin >> s;
	} while(s > 45 || s < 1);
	int n = 0, res = 0;
	int so[100000];
	for(int i = 10001; i < 100000; i++) {
		if(p[i] && tcs(i) == s) {
			so[n] = i;
			n++;
			if(check0(i)) // check hang 1 va cot 1 co so 0 khong 
				res = 1;
		}
	}
	if(n == 0 || res == 0) {
		cout << "Khong co ket qua thoa man !";
		return 0;
	}
	int a[5][5];
	int k, check = 1, CHECK = 1;
	tryagain:
		while(check) { // hang 1
			k = rand() % n;
			if(check0(so[k])) 
				check = 0;
		}
		int tmp1 = so[k];
		hang(tmp1, a, 0);
		while(check == 0) { // cot 1
			k = rand() % n;
			if(check0(so[k]) && so[k]/10000 == a[0][0])
				check = 1;
		}
		int tmp2 = so[k];
		cot(tmp2, a, 0);
		for(int i1 = 0; i1 < n; i1++) {
			if(so[i1]%10 == a[4][0] && so[i1]/10000 == a[0][4]) { // cheo phu
				int tmp3 = so[i1];
				for(int j = 4; j >= 0; j--) {
					a[4-j][j] = tmp3 % 10;
					tmp3 /= 10;
				}
				for(int i2 = 0; i2 < n; i2++) { // hang 2
					if(so[i2]/10000 == a[1][0] && so[i2]/10%10 == a[1][3]) {
						int tmp4 = so[i2];
						hang(tmp4, a, 1);
						for(int i3 = 0; i3 < n; i3++) { // cot 2
							if(so[i3]/10000 == a[0][1] && so[i3]/1000%10 == a[1][1] && so[i3]/10%10 == a[3][1]) {
								int tmp5 = so[i3];
								cot(tmp5, a, 1);
								for(int i4 = 0; i4 < n; i4++) { // hang 3
									if(so[i4]/10000 == a[2][0] && so[i4]/1000%10 == a[2][1] && so[i4]/100%10 == a[2][2]) {
										int tmp6 = so[i4];
										hang(tmp6, a, 2);
										for(int i5 = 0; i5 < n; i5++) { // cot 3
											if(so[i5]/10000 == a[0][2] && so[i5]/1000%10 == a[1][2] && so[i5]/100%10 == a[2][2]) {
												int tmp7 = so[i5];
												cot(tmp7, a, 2);
												for(int i6 = 0; i6 < n; i6++) { // hang 4
													if(so[i6]/10000 == a[3][0] && so[i6]/1000%10 == a[3][1] && so[i6]/100%10 == a[3][2]) {
														int tmp8 = so[i6];
														hang(tmp8, a, 3);
														for(int i7 = 0; i7 < n; i7++) { // hang 5;
															if(so[i7]/10000 == a[4][0] && so[i7]/1000%10 == a[4][1] && so[i7]/100%10 == a[4][2]) {
																int tmp9 = so[i7];
																hang(tmp9, a, 4);
																int cheo1 = 0, cot5 = 0;
																for(int b = 0; b < 5; b++) {
																	cheo1 = cheo1 * 10 + a[b][b];
																	cot5 = cot5 * 10 + a[b][4];
																}
																if(p[cheo1] && tcs(cheo1) == s && p[cot5] && tcs(cot5) == s) {
																	CHECK = 0;
																	cout << "hinh vuong tim duoc la : " << endl;
																	for(int i8 = 0; i8 < 5; i8++) {
																		for(int i9 = 0; i9 < 5; i9++) {
																			cout << a[i8][i9] << " ";
																		}
																		cout << endl;
																	}
																	return 0;
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
	if(CHECK)
		goto tryagain;
}
