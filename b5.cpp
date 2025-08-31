//BAI 5

#include<bits/stdc++.h>
using namespace std;

int main() { 
    string s; 
    getline(cin, s); 
    int m = stoi(string(1, s[0])); 
int n = stoi(string(1, s[4])); 
int k = stoi(string(1, s[8])); 
 
    int sum = m+n; 
    if(sum == k) 
        cout << "YES\n"; 
    else 
        cout << "NO\n";
    return 0;
}

