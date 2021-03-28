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
	const int maxn = 100005;
	const ll inf = 1LL << 60;
	
	ll a[maxn];
	ll minn[maxn];
	ll maxx[maxn];
	
	int n;
	cin >> n;
	
	rep(i, 0, n)
		cin >> a[i];
	
	maxx[0] = -inf;
	rep(i, 1, n){
		maxx[i] = max(maxx[i-1], a[i-1]);
		//cout << maxx[i];
	}	
		
	minn[n-1] = inf;
	
	for (int i=n-2; i>= 0; i--){
		minn[i] = min(minn[i+1], a[i+1]);
		//cout << minn[i];
	}	
		
	int ans=0;
	rep(i,0,n){
		if(maxx[i] < a[i] && minn[i] > a[i]){
			//cout << a[i];
			ans++;
		}
	}
	
	cout << ans << endl;
	
}
