#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void in(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void in1(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << 0 << endl;
}

//void sinh(int n, int max, vector<int>& v, void (*in)(vector<int> v)) {
//	if (n == 0) {
//		in(v);
//		return;
//	}
//
//	for (int i = min(n, max); i >= 1; i--) {
//		v.push_back(i);
//		sinh(n - i, i - 1, v, in);
//		v.pop_back();
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector<int> v;
//	sinh(n, n - 1, v, in);
//	sinh(n, n - 1, v, in1);
//
//	return 0;
//}

void sinh (int n, int max, vector<int> &v, void (*in)(vector<int> v)){
	if(n == 0){
		in(v);
		return;
	}
	for(int i=min(n, max); i>=1; i--){
		v.push_back(i);
		sinh(n-i, i-1, v, in);
		v.pop_back();
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> v;
	sinh(n, n-1, v, in);
	sinh(n, n-1, v, in1);
}