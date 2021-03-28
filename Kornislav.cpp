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
	vi tt;
	rep(i,0,4){
		int a;
		cin >> a;
		tt.push_back(a);
	}
	sort(tt.begin(), tt.end());
	
	cout << tt[0]*tt[2] << endl;
}
