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
	ll n,cnt=1;
	cin >> n;
	
	if (n == 1)
		cout << "1" << endl;
	else{
		rep(i,1,n+1){
			cnt+=cnt;
			if(cnt >= n){
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}
