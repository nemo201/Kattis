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
	ll n,w,h;
	vi match;
	cin >> n >> w >> h;
	rep(i,0,n){
		int a;
		cin >> a;
		match.push_back(a);
	}
	
	double hyp =pow(pow(w,2)+pow(h,2),0.5);
	
	rep(i,0,n){
		if(match[i] <= hyp)
			cout << "DA" << endl;
		else
			cout << "NE" << endl;
	}
}
