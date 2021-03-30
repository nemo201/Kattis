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
	vi shop;
	int n;
	cin >> n;
	rep(i,0,n){
		int a;
		cin >> a;
		shop.push_back(a);
	}
	sort(shop.rbegin(), shop.rend());
	
	int discount = 0;
	for(int i=0; i<n; i++){
		if(i%3 == 2)
			discount += shop[i];
	}
	cout << discount << endl;
	
	return 0;
}
