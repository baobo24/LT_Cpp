//BAI 8

#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s) {
    for (auto &c : s) c = tolower(c);
    stringstream ss(s);
    string res = "", tmp;
    vector<string> v;
	while (ss >> tmp){
		tmp[0] = toupper(tmp[0]);
		v.push_back(tmp);
	}										//  O(n)
	for(int i=1; i<v.size(); ++i){
		res += v[i] + ' ';
	}   									//  O(n)
	for (auto &c : v[0]) c = toupper(c);	// => O(n)   
	res.pop_back();
	res += ", " + v[0];
	return res;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << chuanhoa(s) << endl;
    }
    return 0;
}
