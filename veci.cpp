#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
	int a;
	cin >> a;
	int num = a;
	int digits = (int)log10(a) + 1;
	int arr[digits];
	rep(i,0,digits){
		arr[i] = a%10;
		a /= 10;
	}
	sort(arr, arr+digits);
	int MIN = 1000000;
	do{
		int s = 0;
		for(int i=digits-1; i >= 0; i--)
			s =s*10 + arr[i];
		if (s > num && s < MIN)
			MIN = s;
	} while (next_permutation(arr, arr+digits));
	cout << (MIN == 1000000 ? 0 : MIN);
	return 0;
}
