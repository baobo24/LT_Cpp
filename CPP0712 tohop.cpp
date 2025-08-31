#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define foru(i, a, b) for (int i = a; i <= b; ++i)
#define ford(i, b, a) for (int i = b; i >= a; --i)
#define fill(a, b) memset(a, b, sizeof(a))
#define all(v) v.begin(), v.end()
#define ii pair<int, int>
const int mod = 1e9 + 7;

int n, k, a[20];
bool check;
void khoitao(){
	for(int i=1; i<=k; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		i--;
	}
	if(i == 0){
		check = false;
	}
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j] = a[j-1]+1;
		}
		for(int j=1; j<=k; j++){
			cout << a[j];
		}
		cout << ' ';
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		khoitao();
		for(int j=1; j<=k; j++){
			cout << a[j];
		}
		cout << ' ';
		check = true;
		while(check){
			sinh();
		}
		cout << endl;
	}
	return 0;
}

//int n, k;
//int a[1000];
//void BackTrack(int i, int begin)
//{
//    for (int j = begin; j <= n; j++)
//    {
//        a[i] = j;
//        if (i == k)
//        {
//            foru(i, 1, k) cout << a[i];
//            cout << ' ';
//        }
//        else
//        {
//            BackTrack(i + 1, j + 1);
//        }
//    }
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) 
//    {
//        cin >> n >> k;
//        BackTrack(1, 1);
//        cout << endl;
//    }
//}