#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        map <int, int> mp;
        for(int i=0; i<n; i++){
        	for(int j=0; j<n; j++){
        		cin >> a[i][j];
        		if(mp[a[i][j]] == i){
        			mp[a[i][j]] = i+1;
				}
			}
		}
		int dem = 0;
        for(auto it : mp){
        	if(it.second == n)
        		dem++;
		}
        cout << dem << endl;
    }
}
