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
	ll n,p,q;
	cin >> n >> p >> q;
	
	if(n==1){
		if((p+q)%2 == 0)
			cout << "paul\n";
		else
			cout << "opponent\n";
	}
	
	else{
		if((p+q)%n==0){
				cout << "paul\n";
		}

		else
			cout << "opponent\n";
	}
}
