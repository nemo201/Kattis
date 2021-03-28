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
	ll n;
	cin >> n;
	vi vec;
	rep(i,0,n){
		int a;
		cin >> a;
		vec.push_back(a);
	}
	
	sort(vec.rbegin(), vec.rend());
	
	int cost = 0;
	int c = vec.size();
	
	rep(j,0,c){
		if(j%3 != 2)
			cost += vec[j];
	}
	
	cout << cost << endl;
	
}
