#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

unsigned int reverse(unsigned int n){
	unsigned int rev =0;
	while (n > 0){
		rev <<=  1;
		if((n & 1) == 1)
			rev ^= 1;
			
		n >>=1;
	}
	return rev;
}

int main() {
	unsigned int n;
	cin >> n;
	cout << reverse(n) << endl;
}
