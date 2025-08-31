#include <bits/stdc++.h>
using namespace std;


vector<string> v;
char a[5][5];
int s;

int tongcs(int n){
	int sum=0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
bool snt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	return n>1;
}
bool check0(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i] == '0')
			return false;
	}
	return true;
}
bool check1(string x){
	if(snt(stoi(x)) && tongcs(stoi(x)) == s)
		return true;
	return false;	
}
void hang(int i, string s){
	for(int j=0; j<5; j++){
		a[i][j] = s[j];
	}
}
void cot(int j, string s){
	for(int i=0; i<5; i++){
		a[i][j] = s[i];
	}
}

int main(){
	cin >> s;
	for(int i=10001; i<=99999; i++){
		if(snt(i) && tongcs(i) == s)
			v.push_back(to_string(i));
	}
	for(int i=0; i<v.size(); i++){
		if(check0(v[i])){
			hang(0, v[i]);
			for(int i0=0; i0<v.size(); i0++){
				if(v[i0][0] == a[0][0] && check0(v[i0])){
					cot(0, v[i0]);
					for(int i1=0; i1<v.size(); i1++){          
						if(v[i1][0] == a[4][0] && v[i1][4] == a[0][4]){
							for(int p=1; p<4; p++){				
								a[4-p][p] = v[i1][p];
							}
							for(int i2=0; i2<v.size(); i2++){
								if(v[i2][0] == a[1][0] && v[i2][3] == a[1][3]){
									hang(1, v[i2]);
									for(int i3=0; i3<v.size(); i3++){
										if(v[i3][0] == a[0][1] && v[i3][1] == a[1][1] && v[i3][3] == a[3][1]){
											cot(1, v[i3]);
											for(int i4=0; i4<v.size(); i4++){
												if(v[i4][0] == v[2][0] && v[i4][1] == v[2][1] && v[i4][2] == v[2][2]){
													hang(2, v[i4]);
													for(int i5=0; i5<v.size(); i5++){
														if(v[i5][0] == a[0][2] && v[i5][1] == a[1][2] && v[i5][2] == a[2][2]){
															cot(2, v[i5]);
															for(int i6=0; i6<v.size(); i6++){
																if(v[i6][0] == a[3][0] && v[i6][1] == a[3][1] && v[i6][2] == a[3][2]){
																	hang(3, v[i6]);
																	for(int i7=0; i7<v.size(); i7++){
																		if(v[i7][0] == a[4][0] && v[i7][1] == a[4][1] && v[i7][2] == a[4][2]){
																			hang(4, v[i7]);																																				
																			string cheo1 = "", cot3 = "", cot4 = "";
																			for(int k=0; k<5; k++){
																				cheo1 += a[k][k];
																				cot3 += a[k][3];
																				cot4 += a[k][4];
																			}																
																			if(check1(cheo1) && check1(cot3) && check1(cot4)){
																				for(int i8=0; i8<5; i8++){
																					for(int i9=0; i9<5; i9++){
																						cout << a[i8][i9] << ' ';
																					}
																					cout << endl;
																				}
																				cout << "---------" << endl;																		
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
	return 0;
}
