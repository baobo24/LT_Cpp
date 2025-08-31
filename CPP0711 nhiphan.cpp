#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int a[100];
void Try(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if (i == n){
            foru(k, 1, n) cout << a[k];
            cout << ' ';
        }
        else Try(i + 1);
    }
}
int main(){
	cin >> n;
    Try(1); 
    cout << endl;
}