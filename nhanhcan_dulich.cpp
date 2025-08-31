#include <bits/stdc++.h>
using namespace std;

int A[100], C[100], F[100][100];
int XOPT[100], X[100];
int n, b, ind;
float W, FOPT=-32000, cost, weight=0;


void Init(){
	cin >> n >> b;
	cout<<"So luong do vat: "<< n << endl;
	cout<<"Trong luong tui: "<< b << endl;
	for(int i=1; i<=n; i++)
		cin >> A[i] >> C[i];
	cout<<"Vector trong luong: ";
	for(int i=1; i<=n; i++)
		cout<< A[i]<< " ";
	cout << endl;
	cout<<"Vector gia tri su dung: ";
	for(int i=1; i<=n; i++)
		cout<< C[i]<< " ";
	cout << endl;
}
void Update_Kyluc(){
	if (cost>FOPT) { FOPT =cost;
	for(int i=1; i<=n; i++)
		XOPT[i] = X[i];

}
}
void Result() {
	cout << "Ket qua toi uu: " << FOPT << endl;
	cout << "Phuong an toi uu:";
	for(int i=1; i<=n; i++)
		cout<< XOPT[i] <<" ";

}
void Branch_And_Bound( int i) {
	int j, t =(b-weight)/A[i];
	for(j=t; j>=0; j--){ X[i] = j;
		weight = weight+A[i]*X[i];
		cost = cost + C[i]*X[i];
		if (i==n) Update_Kyluc();
		else if ( cost+C[i+1]*(b-weight)/A[i+1]>FOPT)
			Branch_And_Bound(i+1);
		weight = weight-A[i]*X[i];
		cost = cost - C[i]*X[i];
	}
}
int main() {
	Init();
	Branch_And_Bound(1);
	Result();
	return 0;
}